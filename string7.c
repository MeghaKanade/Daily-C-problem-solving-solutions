#include<stdio.h> 
#include<ctype.h> 
#include<conio.h>

// Function to check the Vowel
int isVowel(char ch) {
    ch = toupper(ch);
    return (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
}
// to count total number of vowel from 0 to n
int countVovels(char str[], int n) {
    if (n == 1) return isVowel(str[n - 1]);
    return countVovels(str, n - 1) + isVowel(str[n - 1]);
}
// Main Calling Function
int main() {
    // string object
    char str[10] = "prepinsta";

    // Total numbers of Vowel
    printf("%d", countVovels(str, 9));
    return 0;

}