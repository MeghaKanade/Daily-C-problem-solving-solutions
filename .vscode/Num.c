#include<stdio.h>

int prime(int x)
{
    int count=1,i;
    for(i=2;i<=x;i++)
    {
        if(x%i==0)
        {
            count++;
            break;
        }
        if(count==0)
        return 1;
        else return 0;
    }
}
    int main()
{
    int n,count=1;
    printf("Enter Number\n");
    scanf("%d",&n);
    for(int i=2;i<=n;i++)
    {
        if(prime(i)==1)
        {
            if(prime(n-1)==1)
            {
                printf("%d can be expressed as sum of %d and %d",n,i,n-i);
            }
            count=0;
        }
    }
    
    if(count==1)
        {
            printf("%d cannot be expressed as sum of two prime numbers\n",n);
        }
    return 0;
}