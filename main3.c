#include <stdio.h>

int main ()
{
    float height = 178.3;
    float price = 290.99;
    float temp = -26.2;
    double pi = 3.1415926;

    printf("%f\n", height);  // %f 浮點數 (Float) default 6 digits after the decimal point
    printf("My height is %.1fcm\n",height);
    printf("The price is $%.2f\n", price);
    printf("It's %.1f°C outside\n", temp);
    printf("pi = %.5lf\n", pi);

}