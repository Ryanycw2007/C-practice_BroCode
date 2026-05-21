#include <stdio.h>
#include <stdbool.h>
// Function prototype = Provide the compiler with information about a function's 
//                      name, return type ,and parameters before its actual definition.
//                      Enables type checking and allows functions to be used before they're defined.
//                      Improve readability, organization, and helps prevent errors.

void hello(char name[], int age); //Function prototype, need ;
bool ageCheck(int age); 

int main()
{
    hello("Clippy", 14);
    if(ageCheck(14))
    {
        printf("You are old enough to work at Office 97!");
    }
    else
    {
        printf("You must be 16+ to work at Office 97");
    }

    return 0;
}

void hello(char name[], int age)
{
    printf("Hello %s!\n", name);
    printf("You are %d years old\n", age);
}

bool ageCheck(int age)
{
    return age >= 16;//return T/F
}