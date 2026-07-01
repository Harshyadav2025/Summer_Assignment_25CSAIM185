#include <stdio.h>
int main() {
    int n, a = 0, b = 1, t, i;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    for (i = 1; i <= n; i++) {
        printf("%d ", a);
     t = a + b;
        a = b;
        b = t;
    }
    printf("\n");
    return 0;
}