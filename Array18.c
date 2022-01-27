#include<stdio.h>

    int gcd(int a, int b)
    {
     if(b==0)
      return a;
     else
      return gcd(b, a%b);
    }
    
    void ArrayRotate (int A[], int n, int k)
    {
         int d=-1,i,temp,j;
         for(i=0;i<gcd(n,k);i++)
         {
              j=i;
              temp=A[i];
              while(1)
              {
               d=(j+k)%n;
               if(d==i)
                break;
               A[j]=A[d];
               j=d;
              }
              A[j]=temp;
         }
    }

    void displayArray(int A[],int n)
    {
     int i;
     for(i=0;i<n;i++)
      printf("%d  ",A[i]);
     printf("\n");
    }

int main()
{
      int n,i,k;
      printf("Enter size of the Array\n");
      scanf("%d",&n);
      int A[n];
      printf("Enter Array elements\n");
      for(i=0;i<n;i++)
       scanf("%d",&A[i]);
      printf("Enter the value of k\n");
      scanf("%d",&k);
      displayArray(A,n);
      ArrayRotate(A,n,k);
      displayArray(A,n);
      return 0;
}