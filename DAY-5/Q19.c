#include <stdio.h>
int main() {
    int a, i;
    printf("Enter a positive integer: ");
    scanf("%d", &a);
    printf("Factors of %d are: ", a);
    for (i = 1; i <= a; i++) {
        if (a % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}