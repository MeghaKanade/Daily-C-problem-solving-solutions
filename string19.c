#include<stdio.h>   
int main() {
     //Initializing variables.
    char str[100] = "P(r(e)p)Ins)ta", str_no_spc[100];
    int i = 0, j = 0 ;
       
    //Iterating each character of string.
    for (int i = 0; str[i] != '\0'; i++)
    {
       if (str[i] != '(' &&  str[i] != ')')  // Excluding brackets.
        {
              str_no_spc[j++] = str[i];
        }
    }

    str_no_spc[j] = '\0';
    //Printing result.
    printf("The string after removing all the spaces is:%s", str_no_spc);
       return 0;
}