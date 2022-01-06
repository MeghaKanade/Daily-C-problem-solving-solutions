#include<stdio.h>
int main()
{
    int num,n1,r,sum=0;
    printf("Enter the number");
    scanf("%d",&num);
    n1=num;

    while(num>0)
    {
        r=num%10;
        sum=sum+(r*r*r);
        num/=10;
    }
    if(n1=sum)
    {
        printf("%d is armstrong number",n1);
    }
    else
    {
        printf("%d is not armstrong number",n1);
    }
    return 0;
}
