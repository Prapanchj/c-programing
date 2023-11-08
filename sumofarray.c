/********************************************************************************
 * Name				:sum of array
 * Author			:Prapanch J
 * Description		        :c- Program 
 * Version			:1.0
* Date				:/10/23
 * ******************************************************************************/
#include <stdio.h>

int sum(int arr[], int lim)
{
    int sum=0;
    for (int i=0; i<lim; i++)
    {
        sum += arr[i];
    }
    return sum;
}

void main(){
int lim, i;

    printf("Enter the limit ");
    scanf("%d", &lim);

    int arr[lim];
    printf("Enter %d numbers: ", lim);
    for (i=0; i<lim; i++){
        scanf("%d", &arr[i]);
    }

    printf("Sum of numbers in array is %d\n", sum(arr,lim));
}


