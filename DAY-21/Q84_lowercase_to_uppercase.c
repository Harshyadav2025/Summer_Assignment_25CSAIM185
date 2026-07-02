/*
 * Q84: Convert lowercase to uppercase
 * Day-21 | Admission No: 25CSAIM290
 */

#include <stdio.h>

int main() {
    char str[200];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Uppercase: ");
    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        char c = str[i];
        /* Convert lowercase letter to uppercase */
        if (c >= 'a' && c <= 'z') {
            c = c - 32;
        }
        printf("%c", c);
    }
    printf("\n");

    return 0;
}
