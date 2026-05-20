#include <stdio.h>


int main()
{
    int num1 = 1;
    int num2 = 10;
    int num3 = 100;
    
    printf("%d\n", num1);
    printf("%d\n", num2);
    printf("%d\n\n", num3); //normal

    printf("%3d\n", num1);
    printf("%3d\n", num2);
    printf("%3d\n\n", num3); //Right-aligned    %[-/+:Left or Right][number:width][d:Format]

    printf("%-3d\n", num1);
    printf("%-3d\n", num2);
    printf("%-3d\n\n", num3);//Left-aligned

    printf("%03d\n", num1);
    printf("%03d\n", num2);
    printf("%03d\n\n", num3);//Fill Left side with 0

    printf("%+d\n", num1);
    printf("%+d\n", num2);
    printf("%+d\n\n", num3);//Display sign for positive/negative numbers

    return 0;
}