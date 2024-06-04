#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    int a,b,c,max_num,min_num;
    printf("enter three numbers: \n");
    scanf("%d%d",&a,&b);
    max_num=fmax(a,b);
    min_num=fmin(a,b);
    printf("Max and Min numbers are: %d & %d",max_num,min_num);
    return 0;
}
