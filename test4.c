//https://zerojudge.tw/ShowProblem?problemid=f302
#include <stdio.h>
#include <math.h>
int main()
{
   char in[10];
   int count;
   int deci = 0;
   scanf("%s%n", in, &count);
   for(int i = 0;i < count; i++)
   {
        deci = deci +(in[i] - '0')*pow(9, count-i-1);
       
   }
   printf("%d", deci);
   return 0;
}

//claude
/*非常接近了！邏輯完全正確！但有一個陷阱：

---

## 問題：`%n` 在 `%s` 後面 / Problem: `%n` after `%s`

```c
scanf("%s%n", in, &count);

// 輸入 "21"
// in    = "21"
// count = 2  ← 這個其實是對的！
```

這個情況剛好沒問題，但不穩定，建議換成 `strlen`。

---

## 真正的問題：`pow` 回傳 `double` / Real Problem: `pow` Returns `double`

```c
deci = deci + (in[i] - '0') * pow(9, count-i-1);
//                             ↑ 回傳 double！
// double 有精度問題，例如：
// pow(9, 2) 可能回傳 80.9999999 而不是 81
// (int)80.999 = 80 ← 差1！
```

---

## 修正版 / Fixed Version

```c
#include <stdio.h>
#include <string.h>

int main()
{
    char in[10];
    int deci = 0;

    scanf("%s", in);
    int count = strlen(in);    // ✅ 更可靠

    for (int i = 0; i < count; i++)
    {
        // 自己算次方，避免 pow 的浮點數問題
        int power = 1;
        for (int j = 0; j < count-i-1; j++)
            power *= 9;

        deci = deci + (in[i] - '0') * power;
    }

    printf("%d", deci);
    return 0;
}
```

---

## 測試 / Test

```
輸入 21:
i=0: '2'-'0'=2, 9^1=9,  2×9=18
i=1: '1'-'0'=1, 9^0=1,  1×1=1
deci = 19 ✅

輸入 11:
i=0: 1×9=9
i=1: 1×1=1
deci = 10 ✅
```

邏輯完全正確，只需要把 `pow` 換掉！試試看！
*/