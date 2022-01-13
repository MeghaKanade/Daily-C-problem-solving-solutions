#include<stdio.h> 

#include<math.h>

int main() {

    double a, b, c, d, root1, root2, r, i;

    printf("Enter value of a, b and c: ");

    scanf("%lf %lf %lf", &a, &b, &c);

    d = b * b - 4 * a * c;

    // condition for real and different roots

    if (d > 0) {

        printf("Two Real Roots\n");

        root1 = (-b + sqrt(d)) / (2 * a);

        root2 = (-b - sqrt(d)) / (2 * a);

        printf("root1 = %.2lf \nroot2 = %.2lf", root1, root2);

    }

    // condition for real and equal roots

    else if (d == 0) {

        printf("Equal Roots\n");

        root1 = root2 = -b / (2 * a);

        printf("root1 = root2 = %.2lf;", root1);

    }
    // if roots are not real

    else {

        r = -b / (2 * a);

        i = sqrt(-d) / (2 * a);

        printf("No Real Roots\n");

        printf("root1 = %.2lf+%.2lfi \nroot2 = %.2f-%.2fi", r, i, r, i);

    }
    return 0;

} 