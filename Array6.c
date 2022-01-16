#include<stdio.h>
int main()
    {
        int n, p, q, a[100], b[100];
        printf("Enter the number of elements in an array:\n");      
        scanf("%d", &n);

        printf("Enter the elements of an array:\n");       
        for (p = 0; p < n ; p++)
        scanf("%d", &a[p]);

        for (p = n - 1, p = 0; p >= 0; p--, q++)
        b[q] = a[p];

        for (p = 0; p < n; p++)     
        a[p] = b[p];
        printf("Reverse of an array is:\n");
        
        for (p = 0; p < n; p++)
        printf("%d\n", a[p]);       

        return 0;
    }