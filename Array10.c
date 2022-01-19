#include <stdio.h>
#define maximum 256
int main ()
{
  int arr[maximum][9], array[maximum][9];
  int k = 0, K, x, y;
  printf ("Enter the Size:");
  scanf ("%d", &K);
  printf ("Enter the elements :");
  for (int m = 0; m < K; m++)
    {
      scanf ("%d", &arr[m][0]);
      arr[m][1] = 0;
    }
  for (int m = 0; m < K; m++)
    {
      if (arr[m][1])
	continue;
      y = 1;
      for (int n = m + 1; n < K; n++)
	{
	  if (arr[m][0] == arr[n][0])
	    {
	      arr[n][1] = 1;
	      y++;
	    }
	}
      array[k][0] = arr[m][0];
      array[k][1] = y;
      k++;
    }
  K = k;
  printf (" \nElements Frequency\n");
  for (int m = 0; m < K; m++)
    {
      printf (" %d %d \n", array[m][0], array[m][1]);
    }
  for (int m = 0; m < K - 1; m++)
    {
      x = array[m][1];
      for (int n = m + 1; n < K; n++)
	{
	  if (x < array[n][1])
	    {
	      x = array[n][1];
	      array[n][1] = array[m][1];
	      array[m][1] = x;

	      x = array[n][0];
	      array[n][0] = array[m][0];
	      array[m][0] = x;
	    }
	}
    }
  printf (" Elements Sorted Frequency\n");
  for (int m = 0; m < K; m++)
    {
      printf (" %d %d \n", array[m][0], array[m][1]);
    }
  printf ("\n New array:\n");
  for (int m = 0; m < K; m++)
    {
      while (array[m][1] != 0)
	{
	  printf (" %d ", array[m][0]);
	  array[m][1]--;
	}
    }
  return 0;
}