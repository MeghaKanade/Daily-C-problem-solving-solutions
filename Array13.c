#include<stdio.h>

int sort(int arr[], int n)
{
 int i, j;
 for (i = 0; i < n-1; i++)
  for (j = 0; j < n-i-1; j++)
   if (arr[j] > arr[j+1])
   { 
    int temp = arr[j];
    arr[j] = arr[j+1];
    arr[j+1] = temp;
   }
 }

int sort_des(int arr[], int n)
{
  int i,j;
  for (i = 0; i < n; ++i)
  {
   for (j = i + 1; j < n; ++j)
   {
    if (arr[i] < arr[j])
     {
      int a = arr[i]; 
      arr[i] = arr[j];
      arr[j] = a;
     }
    }
  }
}

int main()
{
  //fill the code;
  int n;

  printf("Enter the size of Vector \n");
  scanf("%d",&n);

  int arr1[n], arr2[n];
  int i;
  printf("Enter the Elements of Vector 1\n");

  for(i = 0; i < n ; i++)
  {
   scanf("%d",&arr1[i]);
  }
  printf("Enter the Elements of Vector 2\n");

  for(i = 0; i < n ; i++)
  {
  scanf("%d",&arr2[i]);
  }

  sort(arr1, n);
  sort_des(arr2, n);
  int sum = 0;
  printf(" Minimum scalar product of Vector 1 and Vector 2 = ");

  for(i = 0; i < n ; i++)
  {
   sum = sum + (arr1[i] * arr2[i]);
  }
  printf("%d",sum);
  return 0;
}