#include<stdio.h>
#include<math.h>

int main()
{
    int decimal,rem,octal=0,mult=1;
    printf("Enter the binary num");
    scanf("%d",&decimal);
    while(decimal!=0)
    {
        rem=decimal%8;
        octal+=pow(rem,mult);
        decimal/=8;
        mult*=10;

    }
    printf("The octal number is %d",octal);
    return 0;
}