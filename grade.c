/********************************************************************************
 * Name				:grade of student
 * Author			:Prapanch J
 * Description		        :c- Program 
 * Version			:1.0
* Date				:/10/23
 * ******************************************************************************/
#include <stdio.h>

void main() {
	
	int rollNum;
	float mark1, mark2, mark3, total, pctge;
	char grade;
	
	
	printf("Enter your Roll number:
	scanf("%f",&rollnum);
	printf("Enter marks obtained for Physics:\n");
	scanf("%f",&mark1);
	printf("Enter marks obtained for Chemistry:\n");
	scanf("%f", &mark1);
	printf("Enter marks obtained for Mathematics:\n");
	scanf("%f", &mark1);
	
	
	total = mark1 + mark2+ mark3;
	pctge = (total / 300) * 100;
	
	
	if (pctge >= 90)
		{
		  grade = 'A';
		  printf("Congratulations! You passed.\n");
		}
	else if (pctge>= 80)
		{
		  grade = 'B';
		  printf("Congratulations! You passed.\n");
		}
	else if (pctge>= 70)
		{
		  grade = 'C';
		  printf("Congratulations! You passed.\n");
		}
	else if (pctge >= 60)
		{
		  grade = 'D';
		  printf("Congratulations! You passed.\n");
		}
	else if (pctge  >= 45)
		{
		  grade = 'E';
		  printf("Congratulations! You passed.\n");
		}
	else if (pctge < 45)
		{
		  grade = 'F';
		  printf(omission.\n");
		}
		
	
printf("--------Result--------\n");
printf("Your roll number: %d", rollNo);
printf("your grade is %c\n", grade);
printf("--------Marks Obtained--------\n");
printf("Physics: %f\n", mark1);
printf("Chemistry: %f\n", mark2);
printf("Mathematics: %f\n", mark3);
printf("total marks obtained is: %f\n", total);
printf("Percentage: %f\n", pctge);
	
	
	
}

