//https://zerojudge.tw/Submissions?problemid=d074
#include <stdio.h>

int main()
{
    int num;
    int Max = 0;
    int Input;

    scanf("%d", &num);
    for (int i = 1; i<=num; i++)
    {
        scanf("%d", &Input);
        if(Input >= Max)
        {
            Max = Input;
        }
    }

    printf("%d", Max);

    return 0;
}