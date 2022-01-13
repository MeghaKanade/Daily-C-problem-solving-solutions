#include<stdio.h>
void convert_to_words(char *num) 
{ 
    int l = strlen(num); // Get number of digits in given number
if (l == 0) {
printf(stderr, "empty string\n");
return;
}
if (l > 4) {
printf(stderr, "Length more than 4 is not supported\n");
return;
}

/* The first string is not used, to simplify array indexing */
char *single_digits[] = { "zero", "one", "two",
"three", "four","five",
"six", "seven", "eight", "nine"};

 char *two_digits[] = {"", "ten", "eleven", "twelve",
"thirteen", "fourteen",
"fifteen", "sixteen",
"seventeen", "eighteen", "nineteen"};

char *tens_multiple[] = {"", "", "twenty", "thirty", "forty", "fifty",
"sixty", "seventy", "eighty", "ninety"};

char *tens_power[] = {"hundred", "thousand"};

 /* Used for debugging purpose only */
printf("\n%s: ", num);

/* Single digit number */
if (l == 1) {
printf("%s\n", single_digits[*num - '0']);
return;
}

/* Run while loop until num is not '\0' */
 while (*num != '\0') {

/* Code path for first 2 digits */
if (l >= 3) {
 if (*num -'0' != 0) {
 printf("%s ", single_digits[*num - '0']);
 printf("%s ", tens_power[l-3]); // here len can be 3 or 4
}
--l;
}

/* Code path for last 2 digits */
 else {
 /* Need to handle 10-19 explicitly. Sum of the two digits is
used as index of "two_digits" array of strings */
if (*num == '1') {
int sum = *num - '0' + *(num + 1)- '0';
 printf("%s\n", two_digits[sum]);
return;
}

 /* Need to handle 20 independently*/
else if (*num == '2' && *(num + 1) == '0') {
printf("twenty\n");
return;
}

/* Code for rest of the two digit numbers i.e., 21 to 99 */
else {
int i = *num - '0';
printf("%s ", i? tens_multiple[i]: "");
++num;
 if (*num != '0')
 printf("%s ", single_digits[*num - '0']);
}
}
++num;
}
}

int main(void)
{
convert_to_words("7784");
convert_to_words("651");
convert_to_words("98");
convert_to_words("9898");

return 0;
}
