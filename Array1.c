#include<stdio.h>
int main()
{
    int a[50],num,smallest;
    printf("Enter the size of array:");
    scanf("%d",&num);
    printf("Enter the elementsof array");
    for(int i=0;i<num;i++)
    scanf("%d",&a[i]);
    smallest=a[0];
    for(int i=0;i<num;i++)
    {
        if(a[0]<smallest)
        {
            smallest=a[i];
        }

    }
    printf("Smallest element of an array is %d",smallest);
    return 0;
}