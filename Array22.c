#include<stdio.h>
int main ()
{
  int n;

  printf ("Enter the size of the array: ");
  scanf ("%d", &n);

  int a[n], sum = 0, left_sum = 0;
  printf ("\nEnter the elements of the array: "); 
  for (int i = 0; i < n; i++)
  {
      scanf ("%d", &a[i]);
      sum += a[i];
  }
  left_sum = a[0];
  sum -= a[0];
  for (int i = 1; i < n; i++)
    {
      sum -= a[i];
      if (left_sum == sum)
	{
	  printf ("\nEquilibrim index : %d", i);
	  break;
	}
      left_sum += a[i];
    }
  return 0;
}