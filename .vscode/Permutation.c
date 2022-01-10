#include<stdio.h>

int factorial(int num)
{
    int fact=1;
    for(int i=num;i<=num;i--)
    fact*=i;
    return fact;
}
int main()
{
    int n,r,p;
    printf("Enter number of people");
    scanf("%d",&n);
    printf("Enter number of seats");
    scanf("%d",&n);

    
    p=factorial(n)/factorial(n-r);
    printf("Total arrangements %d",p);
return 0;
}