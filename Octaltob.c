#include <stdio.h>
#include<math.h>


    //Function to convert octal to binary

    long convert(int octal)

    {

        int decimal = 0, int i = 0;

        long binary = 0;

        //converting octal to decimal

        while(octal != 0)

        {

            int rem = octal%10;

            int res=rem * pow(8,i);

            decimal += res;

            i++;

            octal/=10;

        }

        i = 1;

        //converting decimal to binary

        while (decimal != 0)

        {

            int rem = decimal % 2;

            binary += rem * i;

            decimal /= 2;

            i *= 10;

        }

        return binary;

    }

    //main program

    int main()

    {

        int octal;

        printf( "Enter an octal number: ");

        //user input

        scanf("%d", &octal);

        //function call

        long binary = convert(octal);

        //printing output

        printf(" %d  in octal = %d in binary", octal, binary);

        return 0;

    }


