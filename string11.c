#include <stdio.h>
#include <string.h>

int main() {
    char str[100] = "Prepinsta", rev[100];
    int i, j, count = 0;
    printf("String Before Reverse: %s", str);
    // finding the length of the string
    while (str[count] != '\0') {
        count++;
    }

    j = count - 1;
    // reversing the string by storing it in another array
    for (i = 0; i <= count; i++) {
        rev[i] = str[j];
        j--;
    }

    printf("String After Reverse: %s", rev);
    int res = strcmp(str, rev);

    if (res == 0) {
        printf(" Palindrome");
    } else {
        printf(" Not palindorme");
    }
    return 0;

}