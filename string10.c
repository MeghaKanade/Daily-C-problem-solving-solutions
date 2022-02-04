#include<string.h> 
#include<stdio.h> 

int main() {
    // Initializing variable.
    char str[10] = "prepinsta";
    int i, length = 0, flag = 0;
   
    length = strlen(str);
    // Initializing for loop.
    for (i = 0; i < length / 2; i++) {
        // Checking if string is palindrome or not.
        if (str[i] == str[length - i - 1]) flag++;
    }

    // Printing result.
    if (flag == i)
        printf("String entered is palindrome");
    else
        printf("String entered is not palindrome");
    return 0;

}