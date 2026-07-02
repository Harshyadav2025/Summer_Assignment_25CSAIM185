/*
 * Q82: Reverse a string
 * Day-21 | Admission No: 25CSAIM290
 */

#include <stdio.h>
#include <string.h>

int main() {
    char str[200];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    /* Remove trailing newline */
    int len = 0;
    while (str[len] != '\0' && str[len] != '\n') len++;
    str[len] = '\0';

    /* Reverse using two-pointer approach */
    int left = 0, right = len - 1;
    char temp;
    while (left < right) {
        temp        = str[left];
        str[left]   = str[right];
        str[right]  = temp;
        left++;
        right--;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}
