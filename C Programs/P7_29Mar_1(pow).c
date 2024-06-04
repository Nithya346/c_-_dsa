//Program to find a number when raised to a certain number
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double base, exp, result;
    printf("Enter the base and exponent number:\n");
    scanf("%lf%lf",&base,&exp);
    result=pow(base,exp);
    printf("Result: %lf",result);
    return 0;
}
