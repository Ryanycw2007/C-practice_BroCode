#include <stdio.h>

int main ()
{
    char hello[5] = {'H','e','l','l','o'};  // 沒有 \0！
    printf("%s\n", hello);   

    char name[] =  "Ryan";
    printf("Hello my name is %s.\n", name);

    char food[] = "Ice cream";
    printf("My favorite dessert is %s.\n", food);

    char email[] = "example@gmail.com";
    printf("My email is %s\n", email);




    return 0;   
}