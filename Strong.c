#include<stdio.h>

int factorial(int num)
{
    int fact=1;
    for(int i=1;i<=num;i++)
    {

    fact=fact*i;

    }
    return fact;

}
int main()
{
    int num,rem,n,sum=0;
    printf("Enter a number");
    scanf("%d",&num);
    n=num;

    while(n!=0)
    {
    rem=n%10;
    rem=factorial(rem);
    sum+=rem;
    n/=10;
    }
    if(sum==num)
    {
        printf("It is a strong number");
    }
    else
    {
        printf("It is not a strong number");
    }
    return 0;
}
