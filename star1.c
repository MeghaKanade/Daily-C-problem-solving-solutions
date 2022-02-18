#include<stdio.h>
int main()
{
    int i,j,l;
    printf("Enter the number of rows");
    scanf("%d",&l);
    for(i=0;i<l;i++)
    {
        for(j=0;j<l;j++)
        {
            if(i==0 || i==l-1 || j==0 || j==l-1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        return 0;
    }

}