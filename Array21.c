#include <stdio.h>
    int make_equal(int a[], int n){
        for (int i = 0; i < n; i++) {
        // Divide number by 2
            while (a[i] % 2 == 0)
            a[i] /= 2;
            // Divide number by 3
            while (a[i] % 3 == 0)
            a[i] /= 3;
        }
        // Remaining numbers
        for (int i = 1; i < n; i++)
            if (a[i] != a[0]) {
            return 0;
            }
    return 1;
    }
    int main(){
        int a[15], n, i;
        scanf("%d", &n);
        for(i=0; i<n; i++)
        scanf("%d", &a[i]);
        if (make_equal(a, n))
        printf("Yes");
        else
        scanf("No");
        return 0;
    }