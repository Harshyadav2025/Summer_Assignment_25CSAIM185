#include<stdio.h>
int main()
{
    int n, product = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    while(n > 0)
    {
        product *= n % 10; // Multiply the last digit to product   
        n /= 10; // Remove the last digit
    }
    
    printf("Product of digits: %d\n", product);
    
    return 0;
}