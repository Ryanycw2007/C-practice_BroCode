#include <stdio.h>
#include <windows.h>//for Windows
//#include <unistd.h>//Linux / MacOS
// for loop = Repeat some code a limited number of times
//            for(Initialization; Condition; Update)

int main()
{
    for(int i = 10; i >= 0; i--)//i for iteration
    {
        printf("%d\n", i);
        Sleep(1000); // Windows: captial S and (ms), Linux/MacOS: lower case s and (sec)
    }
    printf("Happy New Year!!!\n");
    return 0;
}