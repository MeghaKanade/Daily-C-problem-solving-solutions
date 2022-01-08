#include<stdio.h>
int automorphic(int num)
{
    int sqr=num*num;
    int n;
    n=num;
    if(num%10!=sqr%10)
    {
        return 0;
    }
    num=n/10;
    sqr/=10;
    return 1;
}
int main()
{
    int num;
    printf("Enter the number");
    scanf("%d",&num);
    if(automorphic(num))
    {
        printf("Automorphic");
    }
    else
    {
        printf("Not automorphic");
    }

}