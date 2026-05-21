#include <stdio.h>
//while loop = Continue some code WHILE the condition remains true 
//             Condition must be true for us to enter while loop
int main()
{
    int num = 0;
    while(num <= 0)//check before we enter the loop
    {
        printf("Enter a number greater than 0: ");
        if (scanf("%d", &num) != 1)
        {
            printf("Invalid input\n");
            while (getchar() != '\n');
        }
    }
    printf("ok");
    return 0;
}