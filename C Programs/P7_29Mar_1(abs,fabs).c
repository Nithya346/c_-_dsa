#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    int a,result_a;
    double b,result_b;
    printf("Enter the numbers a & b:  \n");
    scanf("%d%lf",&a,&b);
    result_a=abs(a);
    result_b=fabs(b);
    printf("Results of a and b are: %d & %lf",result_a,result_b);
    return 0;
}
