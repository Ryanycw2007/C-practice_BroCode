#include <stdio.h>

int square (int n)//declare before main or do "Forward Declaration"
//int square(int n); <-- forward declaration
{
    return n*n;
}
int main()
{
    int input;
    scanf("%d", &input);
    int result = square(input);
    printf("%d\n", result);
    return 0;
}
/* int square(int n)      <--actual definition
{
    return n*n;
}
*/