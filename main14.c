//Math funtions in C
#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846  //define a constant for pi, which is useful for trigonometric functions

int main()
{
    int x = 9;

    x = sqrt(x);      //sprt : returns the square root of a number
                     //sqrt actually returns a float, but we are storing it in an int, so it will be truncated to 3
                     //printf("%d\n", sqrt(x)); this won't work because sqrt returns a float, and %d is for int
    printf("%d\n", x);  
    printf("%f\n", sqrt(9));
    //----------------------------------------
    
    x= 2;
    x = pow(x, 2);  //pow : returns the value of x raised to the power of 2, which is 4
                     //pow actually returns a float, but we are storing it in an int, so it will be truncated to 4
                     //printf("%d\n", pow(x, 2)); this won't work because pow returns a float, and %d is for int
    printf("%d\n", x);

    //----------------------------------------

    float y = 3.14f;

    y = round(y);//round : rounds a floating-point number to the nearest integer value, which is 3.0 in this case
                 //round returns a float, so we can store it in a float variable

    printf("%f\n", y);

    y = 3.14f;

    y = ceil(y); //ceil : rounds a floating-point number up to the nearest integer value, which is 4.0 in this case
                 //ceil returns a float, so we can store it in a float variable

    printf("%f\n", y);

    y = 3.14f;

    y = floor(y); //floor : rounds a floating-point number down to the nearest integer value, which is 3.0 in this case
                 //floor returns a float, so we can store it in a float variable

    printf("%f\n", y);

    //-------------------------------------

    int c = -3;
    c = abs(c);
    
    printf("%d\n", c);//abs : returns the absolute value of an **integer, which is 3 in this case
    //use fabs for floating-point numbers


    //-------------------------------------

    y = 3.0f;

    y = log(y);//log : returns the **natural logarithm (base e) of a number, which is approximately 1.0986 in this case
            //log returns a float, so we can store it in a float variable

    printf("%f\n", y);

    y = 100.0f;
    y = log10(y);  //log10 : returns the logarithm (base 10) of a number, which is 2 in this case
                   //log10 returns a float, so we can store it in a float variable

    printf("%f\n", y);

    //-----------------------------

    y = 0.5f;

    y = sin(y * PI); //sin : returns the sine of an angle (in radians), which is 1 in this case because sin(PI/2) = 1
              //sin returns a float, so we can store it in a float variable

    printf("%f\n", y);
    //Same for cos and tan functions, which return the cosine and tangent of an angle (in radians), respectively




    

    return 0;
}