#include <stdio.h>
#include <stdbool.h> //header for bool

int main()
{
    bool IsOnLine = true;  //= bool IsOnLine = 1; 
    bool IsStudent = false; //= bool IsStudent = 0;

    printf("%d\n", IsOnLine);

    if(IsOnLine)
    {
        printf("You are Online\n");
    }
    else
    {
        printf("You are Offonline\n");
    }


    if(IsStudent)
    {
        printf("You are a Student\n");
    }
    else
    {
        printf("You are Not a Student\n");
    }


    bool HasADL = true;
    printf("You %s a Driver Liense\n", HasADL? "HAS" : "DO NOT HAVE");


    return 0;
}