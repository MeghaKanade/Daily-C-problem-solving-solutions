#include<stdio.h>
int main()
{
    int n,d,count=0;
    scanf("%d %d",&n,&d);
    while(n)
    {
        int k = n%10; 

        n=n/10; 

        if(k==d) 
        {

            count++;

        }
    }
     printf("%d",count);

    return 0;



}