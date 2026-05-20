//COMPOUND INTREST CALCULATER

#include <stdio.h>
#include <math.h>

int main()
{
    double principal = 0.0; //本金
    double rate = 0.0;      //利率
    int years = 0;
    int timeComponded = 0; //每年复利的次数
    double total = 0.0;

    printf("Compound Interest Calculator\n");

    printf("Enter the principal (P): ");
    scanf("%lf", &principal);

    printf("Enter the interest rate %% (r): ");
    scanf("%lf", &rate);
    rate *= (1.0/100);

    printf("Enter the # of years (t): ");
    scanf("%d", &years);

    printf("Enter the # of times compounded per year (n): ");
    scanf("%d", &timeComponded);

    total = principal * pow( (1 + rate / timeComponded), timeComponded * years);
    printf("\nAfter %d years, the total will be $%.2f\n", years, total);

    return 0;
}