#include<stdio.h>
int main()
{
    int num,n,digit,sum=0,result;
    printf("Enter the number");
    scanf("%d",&num);
    n=num;
    while(n!=0)
    {
        digit=n%10;
        sum+=digit;
        n/=10;
    }
    result=num%sum;
    if(result==0)
    {
        printf("Number is Harshad");
    }
    else
    {
        printf("Number is not Harshad");
    }
    return 0;
}