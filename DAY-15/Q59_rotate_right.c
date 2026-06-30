/*
 * Q59: Rotate array right by K positions
 * Day-15 | Admission No: 25CSAIM290
 */

#include <stdio.h>

int main() {
    int n, k;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number of positions to rotate right: ");
    scanf("%d", &k);

    k = k % n; /* Handle k > n */

    /* Store last k elements temporarily */
    int temp[k];
    for (int i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    /* Shift elements right */
    for (int i = n - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }

    /* Copy temp elements to beginning */
    for (int i = 0; i < k; i++) {
        arr[i] = temp[i];
    }

    printf("Array after right rotation by %d: ", k);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
