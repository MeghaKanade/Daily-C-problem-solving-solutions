#include<stdio.h>
int main()
{
int i,j,r,count,count1;                        //declaring integer variables i,j for loops , r for number of rows and count for increment in value
count=1; //initialising count
printf("Enter the number of rows(even) :\n");  //Asking user for input
scanf("%d",&r);                                //taking number of rows and saving it in variable r
for(i=0;i<r;i++)                               // loop for number of rows
  {
    if(i<r/2)  
     {
       count1=count+1;
       for(j=0;j<=i;j++)                       // loop for digits per each row
         {
           count++;                             //incrementing count
           printf("%d",count);                  //printing digits
         }
       printf("\n");                           // printing newline after each row
     }    
    else                                       //else condition for bottom half
     {
       count=count1;                           //copying value
       for(j=0;j<r-i;j++)                      //loop to print digits 
         {
           printf("%d",count);                 //printing digits
           count++;                            //incrementing count
         }
       count1=count1-(r-i)+1;                  //copying value
       printf("\n");                           //printing newline
     }

  } 

}