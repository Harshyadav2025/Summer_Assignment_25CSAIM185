//WAP TO CREATE A MARKSHEET GENRATION SYSTEM.
#include <stdio.h>
struct Student
{
    int roll;
    char name[50];
    float m1, m2, m3, m4, m5;
    float total, percentage;
};

int main()
{
    struct Student s;

    printf("===== Marksheet Generation System =====\n");

    printf("Enter Roll Number: ");
    scanf("%d", &s.roll);

    printf("Enter Student Name: ");
    scanf("%s", s.name);

    printf("Enter Marks of Subject 1: ");
    scanf("%f", &s.m1);

    printf("Enter Marks of Subject 2: ");
    scanf("%f", &s.m2);

    printf("Enter Marks of Subject 3: ");
    scanf("%f", &s.m3);

    printf("Enter Marks of Subject 4: ");
    scanf("%f", &s.m4);

    printf("Enter Marks of Subject 5: ");
    scanf("%f", &s.m5);

    s.total = s.m1 + s.m2 + s.m3 + s.m4 + s.m5;
    s.percentage = s.total / 5;

    printf("\n========== MARKSHEET ==========\n");
    printf("Roll Number : %d\n", s.roll);
    printf("Name        : %s\n", s.name);
    printf("Subject 1   : %.2f\n", s.m1);
    printf("Subject 2   : %.2f\n", s.m2);
    printf("Subject 3   : %.2f\n", s.m3);
    printf("Subject 4   : %.2f\n", s.m4);
    printf("Subject 5   : %.2f\n", s.m5);
    printf("-------------------------------\n");
    printf("Total       : %.2f\n", s.total);
    printf("Percentage  : %.2f%%\n", s.percentage);

    if (s.percentage >= 60)
        printf("Grade       : A\n");
    else if (s.percentage >= 50)
        printf("Grade       : B\n");
    else if (s.percentage >= 40)
        printf("Grade       : C\n");
    else
        printf("Grade       : F\n");

    if (s.percentage >= 40)
        printf("Result      : PASS\n");
    else
        printf("Result      : FAIL\n");

    return 0;
}