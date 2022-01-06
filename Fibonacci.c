#include<stdio.h>
int main()
{
    int n1=0,n2=1,n3,limit;
    printf("Enter limit of series");
    scanf("%d",&limit);

    printf("Fibonacci series %d%d",n1,n2);

    for(int i=2;i<limit;i++)
    {
        n3=n1+n2;
        n1=n2;
        n2=n3;

        printf("%d",n3);
    }
    return 0;
}