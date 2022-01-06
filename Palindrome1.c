#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number");
    scanf("%d",&num);
    char* s;
    int length=snprintf(s,0,"%d",num);
    //char s[4];
    //sprintf(s,"%d",num);
    for(int i=0;i<length/2;i++)
    {
        int j=length-1-i;
        if(s[i]!=s[j])
        {
            printf("Not a palindrome");
            return 0;
        }
    }

    printf("palindrome");
    return 0;


}