#include <stdio.h>
#include <math.h>

int main()
{
    double radius = 0.0;
    double area = 0.0;
    double surfaceArea = 0.0;
    double volume = 0.0;
    const double PI = 3.14159; //const : the defined value cannot be changed

    printf("Enter the radius: ");
    scanf("%lf", &radius);

    area = PI * pow(radius, 2);
    surfaceArea = 4 * PI * pow(radius, 2);
    volume = (4.0/3) * PI * pow(radius, 3);

    printf("Area: %.2lf\n", area);
    printf("surfaceArea: %.2lf\n", surfaceArea);
    printf("volume: %.2lf\n", volume);







    return 0;
}