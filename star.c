#include<stdio.h>
int main()
{
    int i,j,l;
    printf("Enter the number of rows/colums\n");
    scanf("%d",&l);
    for(int i=0;i<l;i++)
    {
        for(int j=0;j<l;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}