#include<stdio.h> 
#include<string.h> 
 
int main()
{
    //Initializing variable.
  	char str[100];
  	int i;
  	
    //Accepting input.
  	printf("\n Please Enter any String: ");
  	gets(str);
  	
  	//Initializing for loop.
  	for (i = 0; str[i]!='\0'; i++)
  	{
  	    //Toggling characters.
  	    if(str[i] >= 'A' && str[i] <= 'Z') 
            { 
              str[i] = str[i] + 32; 
            } 
            else if(str[i] >= 'a' && str[i] <= 'z')
            {
  	      str[i] = str[i] - 32;
	    }		
  		
  	}

  	printf("\n Toggoled string: %s", str);//Print toggled string.
  	
  	return 0;
}