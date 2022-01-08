#include<stdio.h>
int main()
{
    int binary,decimal=0,rem,mult=1;
    printf("Enter binary number");
    scanf("%d",&binary);
    
    while(binary>0)
    {
        rem=binary%10;
        decimal=decimal+mult*rem;
        binary/=10;
        mult*=2;
    }
    printf("Decimal of given binary number is %d",decimal);
    return 0;
}