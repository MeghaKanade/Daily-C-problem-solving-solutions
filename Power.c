#include<stdio.h>
#include<math.h>
int main()
{
    int num,expo,a=1;
    printf("Enter base number");
    scanf("%d",&num);
    printf("Enter an exponent");
    scanf("%d",&expo);

    while(expo!=0)
    {
        a=a*num;
        --expo;
    }
    printf("Power of %d is %d",num,a);
    return 0;

}