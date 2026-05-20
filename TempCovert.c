#include <stdio.h>
//TEMP CONVERTER
int main()
{
    char choice = '\0';
    float fahrenheit = 0.0f;
    float celsius = 0.0f;

    printf("Temperature Conversion Calculator\n");
    printf("C.Celsius to Fahrenheit\n");
    printf("F.Fahrenheit to Celsius\n");

    printf("\nEnter your choice (C or F): ");
    scanf("%c", &choice);
    while(getchar() != '\n');

    if(choice == 'C')
    {
        //c to f
        printf("Enter the Temperature in Celsius\n:");
        scanf("%f", &celsius);
        fahrenheit = (celsius * 9.0 / 5) + 32;
        printf("%.1f Celsius is equal to %.1f Fahrenheit\n", celsius, fahrenheit);
    }
    else if (choice == 'F')
    {
        //f to c
        printf("Enter the Temperature in Fahrenheit\n:");
        scanf("%f", &fahrenheit);
        celsius = (fahrenheit - 32)*(5.0 / 9);
        printf("%.1f Fahrenheit is equal to %.1f Celsius\n", fahrenheit, celsius);
    }
    else
    {
        printf("Invalid choice! Please enter C or F\n");
    }
    







    return 0;
}