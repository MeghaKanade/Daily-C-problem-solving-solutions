#include <stdio.h>

int isPalindrome (int N)
{           

  int rev = 0, rem;

  int temp = N;

  while (temp)
    {
      rem = temp % 10;
      rev = rev * 10 + rem;
      temp /= 10;
    }

  if (N == rev)
    return 1;

  return 0;
}
void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void sort(int arr[], int n)
{
    int i, j, m;
    for (i = 0; i < n - 1; i++) {
        m= i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[m])
                m = j;
        swap(&arr[m], &arr[i]);
    }
}
int main ()
{

  int N;        
  printf("Enter the size of the array: ");
  scanf("%d",&N);

  int A[N]; 
    
  printf("\nInput the elements of the array: ");
 
  for (int i = 0; i < N; i++)
     scanf("%d",&A[i]);

  sort (A,N);       

  int result;       

  for (int i = 0; i < N; i++)
    {
      if (isPalindrome (A[i]))
        result = A[i];
    }

  printf("\nThe longest palindrome number is : %d",result);
return 0;
}