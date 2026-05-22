#include <stdio.h>
int main()
{
    int num = 0;
    do //check after we enter the loop
    {
        printf("Enter a number greater than 0: ");
        if (scanf("%d", &num) != 1)
        {
            printf("Invalid input\n");
            while (getchar() != '\n');
            num = 0;
        }
    } while (num <= 0);
    printf("ok");
    return 0;
}