#include <stdio.h>

int main()
{

int count=0;
int n,c;

printf("enter the number: ");
scanf("%d",&n);
c=n;

if(n==0)
printf("digit is 1");

else
{
while(n!=0)
{
n=n/10;

++count;
}
printf("the total digit in giving number %d is : %d",c,count);
}
return 0;
}