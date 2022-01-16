#include <stdio.h>
int main()
    {
    int a[50], size, i, large, small;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the %d elements of the array:\n", size);
    for(i = 0; i < size; i++)
    scanf("%d", &a[i]);

    large = a[0];
    for(i = 1; i < size; i++)
    {
        if(large < a[i])   
        {
            large = a[i]; 
        }
    }
    printf("The largest element is: %d",large);

    small = a[0];  
    for(i = 1; i < size; i++) { if(small>a[i])   
        {
            small = a[i];   
        }
    }
    printf("\nThe smallest element is: %d", small);
    return 0;
    }