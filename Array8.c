#include<stdio.h>

void main() {
    int i, j, n, a[100], temp, p, q, temp1;
  
    printf("Enter the size of array : \n");
    scanf("%d", & n);
  
    printf("Enter the elements : \n"); 
    for (i = 0; i < n; i++) {
        scanf("%d", & a[i]);
    }
  
    // loop for sorting array in ascending order
    for (i = 0; i < n; i++) 
    {
        for (j = i + 1; j < n; j++) { if (a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
  }
  
    printf("Ascending order of an array : \n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    
    // loop for sorting array in descending order
    for (p = 0; p < n; p++) 
    {
        for (q = p + 1; q < n; q++) {
            if (a[p] < a[q]) {
                temp1 = a[p];
                a[p] = a[q];
                a[q] = temp1;
            }
        }
    }
  
    printf("\nDescending order of an array : \n");
    
    for (p = 0; p < n; p++) {
        printf("%d ", a[p]);
    }
    return 0;
}