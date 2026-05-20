#include <stdio.h>
//This program checks if the input is valid or not. If the user enters a non-integer value, it will print "error". If the user enters a valid integer, it will print "success".
int main()
{
    int age;
    if (scanf("%d", &age) != 1)
    {
        printf("error");
    }
    else
    {
        printf("success");
    }
    return 0;
}