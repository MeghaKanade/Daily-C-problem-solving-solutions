#include<stdio.h>
int main(){

    int N;

printf("Enter the size of array");
    scanf("%d", &N);

    int Arr[N], count_even =0, count_odd=0;

    for(int i=0; i<N; i++)
     scanf("%d", &Arr[i]);

    for(int i=0; i<N; i++)
    {
        if(Arr[i]%2==0)
        count_even++;

        else 
        count_odd++;
    }

    printf("Even elements : %d\n", count_even);
    printf("Odd elements : %d\n", count_odd);

    return 0;
}