#include<stdio.h>
int main()
    {
        int num,remainder,n1,n2,rev=0;
        printf("Enter a number");
        scanf("%d",&num);
        n1=num;
        n2=num;
        while(num>0)
        {
            remainder=num%10;
            rev=rev*10 + remainder;
            num/=10;
        
        } 

        if(rev==n1)
        {
            printf("%d is Palindrome number",n1);
        }
        else
        {
            printf("%d is not Palindrome number",n1);
        }
        return 0;
    }
