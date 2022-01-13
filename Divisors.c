#include<stdio.h>

int main() 

{

    int Number,X,count1;

    printf("\nEnter range of number :");

    scanf("%d",&Number);

    printf("\nEnter exact number of divisors :");

    scanf("%d",&X);

    count1 = 0;

    for(int i=1;i<=Number;i++)

    {

        int count2 = 0;

        for(int j=1;j<=i;j++)

        {

            if(i%j==0)

            {

                count2++;

            }

        }

        if(count2==X)

        {

            count1++;

            printf("%d ",i);

        }

    }

    printf("\n%d",count1);

    return 0;

}