#include <stdio.h>
//WEIGHT CONVERTER
int main()
{
    int choice = 0;
    float pounds = 0.0f;
    float kilograms = 0.0f;

    printf("Weight Conversion Calculator\n");
    printf("1.Kilograms to Pounds\n");
    printf("2.Pounds to Kilograms\n");

    printf("\nEnter your choice (1 or 2): ");
    scanf("%d", &choice);
    while(getchar() != '\n');

    if(choice == 1)
    {
        //kilo to lb
        printf("Enter the weight in Kilograms\n:");
        scanf("%f", &kilograms);
        pounds = kilograms * 2.20462f;
        printf("%.2f kilograms is equal to %.2f lbs\n", kilograms, pounds);
    }
    else if (choice == 2)
    {
        //lb to Kilo
        printf("Enter the weight in Pounds\n:");
        scanf("%f", &pounds);
        kilograms = pounds / 2.20462f ;
        printf("%.2f pounds is equal to %.2f kilograms\n", pounds, kilograms);
    }
    else
    {
        printf("Invalid choice! Please enter 1 or 2\n");
    }
    







    return 0;
}