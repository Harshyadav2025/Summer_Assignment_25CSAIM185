//WAP TO CREATE SALARY MANGMENT SYSTEM.
#include <stdio.h>
struct Employee
{
    int id;
    char name[50];
    float basic, hra, da, ta, gross;
};

int main()
{
    struct Employee emp;
    int choice;

    printf("===== Salary Management System =====\n");

    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter Employee Name: ");
    scanf("%s", emp.name);

    printf("Enter Basic Salary: ");
    scanf("%f", &emp.basic);

    // Calculate Allowances
    emp.hra = emp.basic * 0.20;   // 20% HRA
    emp.da = emp.basic * 0.10;    // 10% DA
    emp.ta = emp.basic * 0.05;    // 5% TA

    emp.gross = emp.basic + emp.hra + emp.da + emp.ta;

    printf("\n1. Display Salary Details\n");
    printf("2. Exit\n");

    printf("Enter Your Choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("\n----- Salary Details -----\n");
            printf("Employee ID   : %d\n", emp.id);
            printf("Employee Name : %s\n", emp.name);
            printf("Basic Salary  : %.2f\n", emp.basic);
            printf("HRA           : %.2f\n", emp.hra);
            printf("DA            : %.2f\n", emp.da);
            printf("TA            : %.2f\n", emp.ta);
            printf("Gross Salary  : %.2f\n", emp.gross);
            break;

        case 2:
            printf("Thank You!\n");
            break;

        default:
            printf("Invalid Choice!\n");
    }

    return 0;
}