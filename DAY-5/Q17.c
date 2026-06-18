#include <stdio.h>
int main() {
    int a, i, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &a);
    for(i = 1; i <= a / 2; i++) {
        if(a % i == 0) {
            sum += i;
        }
    }
    if(sum == a && a > 0) {
        printf("%d is a Perfect Number.\n", a);
    } else {
        printf("%d is NOT a Perfect Number.\n", a);
    }
    return 0;
}