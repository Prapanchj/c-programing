#include <stdio.h>

struct employeeData {
    char name[30];
    int id;
    int salary;

};

void main() {
    int count, i;
    printf("Enter the total number of employees: ");
    scanf("%d", &count);

    struct employeeData eData[count];

    printf("Enter Data\n");
    printf("\n");
    for(i = 0; i<count; i++){
        printf("Enter employee's Name: ");
        scanf("%s", eData[i].name);
        printf("Enter employee's ID: ");
        scanf("%d", &eData[i].id);
        printf("Enter employee's Salary: ");
        scanf("%d", &eData[i].salary);
        printf("\n");
    }

    printf("Employee Data\n");
    printf("\n");
    for(i=0; i < count; i++){
        printf("Employee's Name: %s\n", eData[i].name);
        printf("Employee's Id: %d\n", eData[i].id);
        printf("Employee's Salary: %d\n", eData[i].salary);
        printf("\n");
    }
}
