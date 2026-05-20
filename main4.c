#include <stdio.h>

int main()
{
    char grade = 'A';
    char symbol = '&';
    char currency = '£'; char currency = '£'; 
    // 警告：'£' (UTF-8) 佔 2 Byte，但 char 只能存 1 Byte，會導致溢位 (Overflow)。

    printf("Your grade is %c\n", grade);
    printf("%c This a symbol\n", symbol);
    printf("This is British Pound symbol %c\n", currency);


    return 0;
}