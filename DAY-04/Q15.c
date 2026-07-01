#include <stdio.h>
int main() {
    int a, b, remainder, c = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &a);
    b = a;
    while (b != 0) {
        remainder = b % 10;
        c += remainder * remainder * remainder;
        b /= 10;
    }
    if (c == a) {
        printf("%d is an Armstrong number.\n", a);
    } else {
        printf("%d is not an Armstrong number.\n", a);
    }
    return 0;
}