#include <stdio.h>

int main()
{
    float price1 = 19.99;
    float price2 = 1.50;
    float price3 = -100.0; //Default:6 number after the decimal point

    printf("%9.2f\n", price1);// 9:minimum digits to be printed, 2: number of digits after the decimal point
    printf("%9.2f\n", price2);
    printf("%9.f\n", price3);

    printf("%9.1f\n", price1);// output: 20.0, because the number is rounded to 1 digit after the decimal point
    printf("%+9.1f\n", price2);// +: forces to show the sign of the number, even if it's positive
    printf("%9.1f\n", price3);




    return 0;
}