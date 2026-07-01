#include <stdio.h>
int main() {
    int n, i;
    int a = 0, b = 1, t;
    printf("Enter the nth term ");
    scanf("%d", &n);
    if (n == 1) {
        printf("1st term is: %d\n", a);
    } 
    else if (n == 2) {
        printf("2nd term is: %d\n", b);
    } 
    else {
        for (i = 3; i <= n; i++) {
            t = a + b;
            a = b;
            b = t;
        }
        printf("The %dth Fibonacci term is: %d\n", n, t);
    }
    return 0;
}