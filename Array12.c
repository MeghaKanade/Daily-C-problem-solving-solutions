#include<stdio.h>
int main()
{
    int n,i,j,count=0;unique=0;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    int newarr[n];
    printf("Enter the elements of array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++)
    {
        count = 0;
        for(j=0;j<=i;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;  
            }
        }
        if(count==1)
        {
            newarr[unique] = arr[i];
            unique++;
        }
    }
    printf("total distinct number of element : %d \n",unique); 

    printf("The elements that are unique are= ");
    for(i=0; i<unique; i++)
    {
        printf("%d ",newarr[i]);
    }
    return 0;

}