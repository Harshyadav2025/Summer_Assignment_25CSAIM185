/*
 * Q61: Find missing number in array (1 to N)
 * Day-16 | Admission No: 25CSAIM290
 */

#include <stdio.h>

int main() {
    int n;

    printf("Enter value of N (array contains 1 to N with one missing): ");
    scanf("%d", &n);

    int arr[n - 1];

    printf("Enter %d elements:\n", n - 1);
    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
    }

    /* Sum formula: expected = N*(N+1)/2 */
    int expectedSum = n * (n + 1) / 2;
    int actualSum   = 0;

    for (int i = 0; i < n - 1; i++) {
        actualSum += arr[i];
    }

    printf("Missing number = %d\n", expectedSum - actualSum);

    return 0;
}
