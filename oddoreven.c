/********************************************************************************
 * Name				:odd or even
 * Author			:Prapanch J
 * Description		        :c- Program 
 * Version			:1.0
* Date				:/10/23
 * ******************************************************************************/
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

