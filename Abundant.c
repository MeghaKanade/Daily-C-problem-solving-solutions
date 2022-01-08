#include<stdio.h>
int main()
{
    int num, sum=0;
    printf("Enter the number");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            sum+=i;
        }
    }
    if(sum>num)
    {
        printf("Number is abundant");
    }
    else
    {
        printf("Number is not abundant");
    }
    return 0;
}