#include <stdio.h>
int main()
{
    
      int n1, d1,n2,d2,x,y,i,gcd_no;
    
     printf("\nEnter the numerator for 1st number : ");
     scanf("%d",&n1);
     printf("\nEnter the denominator for 1st number : ");
     scanf("%d",&d1);
     printf("\nEnter the numerator for 2nd number : ");
     scanf("%d",&n2);
     printf("\nEnter the denominator for 2nd number : ");
     scanf("%d",&d2);
    
     x=(n1*d2)+(d1*n2); 
    
     y=d1*d2; 
   
   for(i=1; i <= x && i <= y; ++i)
   {
       if(x%i==0 && y%i==0)
          gcd_no = i;
   }
    
    printf("\nThe added fraction is %d/%d ",x/gcd_no,y/gcd_no);
    printf("\n");
  return 0;
}