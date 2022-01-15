#include <stdio.h>
int main()
    {
        int size, i, largest_ele;
        printf("\n Enter the size of the array: ");   
        scanf("%d", &size);
        
        int array[size];
        printf("\n Enter %d elements of  the array: \n", size);     
        for (i = 0; i < size; i++)
        {   
            scanf("%d", &array[i]);
        }
        largest_ele = array[0];
        for (i = 1; i < size; i++)       
        {
            if (largest_ele < array[i])
            largest_ele = array[i];
        }
        printf("\n largest element in array is : %d", largest_ele);     
        return 0;
    }