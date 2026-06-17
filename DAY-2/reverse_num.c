#include<stdio.h>
int main()
{
    int n, reverse = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    while(n > 0)
    {
        reverse = reverse * 10 + n % 10; // Add the last digit to reverse   
        n /= 10; // Remove the last digit
    }
    
    printf("Reversed number: %d\n", reverse);
    
    return 0;
}