#include <stdio.h>
int main() {
    int a, i, j, c;
    int max = -1;
    printf("Enter a positive integer: ");
    scanf("%d", &a);
    for (i = 2; i <= a; i++) {
        if (a % i == 0) {
            c = 1;
            for (j = 2; j <= i / 2; j++) {
                if (i % j == 0) {
                    c = 0;
                    break;
                }
            }
            if (c == 1) {
                max = i;
            }
        }
    }
    if (max != -1) {
        printf("The largest prime factor is: %d\n", max);
    } else {
        printf("No prime factors found.\n");
    }
    return 0;
}