//WAP TO CREATE A LIBARY MANAGMENT SYSTEM.
#include <stdio.h>
int main()
{
    int choice;
    int bookId;
    char bookName[50];

    while (1)
    {
        printf("\n===== Library Management System =====\n");
        printf("1. Add Book\n");
        printf("2. Issue Book\n");
        printf("3. Return Book\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter Book ID: ");
                scanf("%d", &bookId);

                printf("Enter Book Name: ");
                scanf(" %[^\n]", bookName);

                printf("Book Added Successfully!\n");
                break;

            case 2:
                printf("Enter Book ID to Issue: ");
                scanf("%d", &bookId);

                printf("Book Issued Successfully!\n");
                break;

            case 3:
                printf("Enter Book ID to Return: ");
                scanf("%d", &bookId);

                printf("Book Returned Successfully!\n");
                break;

            case 4:
                printf("Thank You!\n");
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }
}