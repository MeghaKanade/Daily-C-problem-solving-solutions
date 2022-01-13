#include<stdio.h>
int main()
{
    int month,year;
    printf("Enter the month");
    scanf("%d",&month);
    printf("Enter the year");
    scanf("%d",&year);
    if((month==2) && (month%400==0) || (month%100!=0) && (month%4==0))
    {
        printf("Number of days is 29");
    }
    else if(month==2)
    {
        printf("Number of days is 28");
    }
    else if(month==1 || month==3 || month==5 || month==7 || month==9 || month==11 )
    {
        printf("Number of days is 31");
    }
    else 
    {
        printf("Number of days is 30");
    }
    return 0;
}