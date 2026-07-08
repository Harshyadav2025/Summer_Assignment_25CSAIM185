//WAP TO CREATE TICKET BOOKING SYSTEM.
#include <stdio.h>
int main()
{
    int choice;
    int seats = 50;
    int book;

    while (1)
    {
        printf("\n===== Ticket Booking System =====\n");
        printf("1. Book Ticket\n");
        printf("2. Check Available Seats\n");
        printf("3. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter Number of Tickets: ");
                scanf("%d", &book);

                if (book <= seats)
                {
                    seats = seats - book;
                    printf("Ticket Booked Successfully!\n");
                }
                else
                {
                    printf("Seats Not Available!\n");
                }
                break;

            case 2:
                printf("Available Seats = %d\n", seats);
                break;

            case 3:
                printf("Thank You!\n");
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }
}