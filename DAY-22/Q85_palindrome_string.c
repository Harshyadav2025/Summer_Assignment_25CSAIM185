/*
 * Q85: Check palindrome string
 * Day-22 | Admission No: 25CSAIM290
 */

#include <stdio.h>

int main() {
    char str[200];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    /* Find length */
    int len = 0;
    while (str[len] != '\0' && str[len] != '\n') len++;
    str[len] = '\0';

    /* Check palindrome using two pointers */
    int left = 0, right = len - 1, isPalin = 1;
    while (left < right) {
        if (str[left] != str[right]) {
            isPalin = 0;
            break;
        }
        left++;
        right--;
    }

    if (isPalin) {
        printf("\"%s\" is a Palindrome string.\n", str);
    } else {
        printf("\"%s\" is NOT a Palindrome string.\n", str);
    }

    return 0;
}
