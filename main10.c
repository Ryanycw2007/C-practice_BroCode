//Basic arithmetic operations = + - * / % ++ --
#include <stdio.h>

int main()
{
    int x = 2;
    int y = 3;
    int z = 0;

    float a = 2;
    float b = 3;
    float c = 0;

    z = x + y;              //addition
    printf("%d\n", z);  

    z = x - y;              //subtraction
    printf("%d\n", z);
    
    z = x * y;             //multiplication
    printf("%d\n", z);

    

    c = a / b;             /*division : if both operands are integers, the result will be an integer (the fractional
                           part will be discarded). If at least one operand is a floating-point number, the result will be a floating-point number. */
    printf("%f\n", c);
    
    z = x % y;             //modulus : gives the remainder of the division of x by y
    printf("%d\n", z);

    //increment and decrement operators
    x = 10;
    printf("x = %d\n", x);     //prints 10
    x++;                    //post-increment: x is incremented after its current value is used
    printf("x = %d\n", x);     //prints 11


    //augmented assignment operators
    //x = x + 1;    equivalent to x++;     equivalent to x+=1;
    //x = x * 2;    equivalent to x *= 2;
    //x = x / 2;    equivalent to x /= 2;

    return 0;
}