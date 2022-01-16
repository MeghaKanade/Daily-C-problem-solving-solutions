#include<stdio.h>
int main()
    {
        int arr[ARR_SIZE];
        int i,m,size,sum=0;
        printf("Enter size of the array: ");// Input size of the array
        scanf("%d", &m);
    
        printf("Enter %d elements in the array: ",m);// Input elements in array
        for(i=0; i<m; i++)
        {
            scanf("%d", &arr[i]);
        }
        for(i=0; i<m; i++)  //Add each elements to sum array
         {
            sum = sum + arr[i];
         }
        printf("Sum of elements in an array = %d", sum);
        return 0;
    }