#include <stdio.h>
// return = return a value back to where you call a function

int square(int num)  //return type | name | parameters
{
    int result = num * num;
    return result;
}
int main()
{
    int num = 0;
    printf("Enter int:");
    scanf("%d", &num);

    printf("%d", square(num));




    return 0;
}