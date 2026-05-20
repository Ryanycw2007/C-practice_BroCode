#include <stdio.h>

int main()
{
    int age = -1; //set the default to an invalid value
    printf("What's your age?\n");
    scanf("%d", &age);

    if(age >= 65)
    {
        printf("cobol is the best programming language\n");
    }
    else if(age >= 18)
    {
        printf("You are an adult\n");
    }
    else if(age < 0)
    {
        printf("Don't lie to me Walter, sussy baka! \n");
    }
    else if(age == 0)
    {
        printf("gugugaga\n");
    }
    else
    {
        printf("You are a child\n");
    }

    return 0;
}