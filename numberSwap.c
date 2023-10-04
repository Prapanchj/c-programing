#include <stdio.h>

void swapNum(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    int *a = &num1, *b = &num2;

    printf("First number is %d\nSecond number is %d\n", *a, *b);
    swapNum(a, b);
    printf("Swapped numbers successfully\n");
    printf("First number is %d\nSecond number is %d\n", *a, *b);

    return 0;
}

