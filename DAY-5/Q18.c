#include <stdio.h>
int main() {
    int a, b, r, sum = 0;
    long fact;
    printf("Enter an integer: ");
    scanf("%d", &a);
    b = a;
    while (a > 0) {
        r = a % 10;
        fact = 1;
        for (int i = 1; i <= r; i++) {
            fact *= i;
        }
        sum += fact;
        a /= 10;
    }
    if (sum == b && b > 0) {
        printf("%d is a Strong Number.\n", b);
    } else {
        printf("%d is NOT a Strong Number.\n", b);
    }
    return 0;
}