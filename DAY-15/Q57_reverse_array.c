/*
 * Q57: Reverse array
 * Day-15 | Admission No: 25CSAIM290
 */

#include <stdio.h>

int main() {
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    /* Reverse using two-pointer technique */
    int left = 0, right = n - 1, temp;
    while (left < right) {
        temp      = arr[left];
        arr[left]  = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }

    printf("Reversed array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
