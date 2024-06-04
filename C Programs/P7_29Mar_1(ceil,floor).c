//Program to round up a floating number
#include<stdio.h>
#include<math.h>
int main (void)
{
    double num, round_up, round_down;
    printf("Enter the number:  ");
    scanf("%lf",&num);
    round_up = ceil(num);
    round_down = floor(num);
    printf("Rounded up number: %lf\n",round_up);
    printf("Rounded down number: %lf\n",round_down);


    return 0;
}
