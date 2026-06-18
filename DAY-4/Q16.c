#include <stdio.h>
int main() {
    int a, n, i, temp, remainder, c, sum;
    printf("Enter start and end of the range: ");
    scanf("%d %d", &a, &n);
    printf("Armstrong numbers between %d and %d are:\n", a, n);
    for (i = a; i <= n; i++) {
        temp = i;
        c = 0;
        while (temp != 0) {
            c++;
            temp /= 10;
        }
        temp = i;
        sum = 0;
        while (temp != 0) {
            remainder = temp % 10;            
            int power = 1;
            for (int j = 0; j < c; j++) {
                power *= remainder;
            }
            sum += power;
            temp /= 10;
        }
        if (sum == i) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}