#include <stdio.h>
void main() {
     int num1;
	  printf("Enter a number: ");
	
	    scanf("%d", &num1);
	
if (num1 == 0)
	{
	  printf("The number is Zero.");
	}
		
else if (num1 % 2 ==0)
	{
	 printf("The number is even.");
	}
		
else 
	{
          printf("The number is odd.");
	}
}

