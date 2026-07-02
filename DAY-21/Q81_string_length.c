/*
 * Q81: Find string length without strlen()
 * Day-21 | Admission No: 25CSAIM290
 */

#include <stdio.h>

int main() {
    char str[200];
    int length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    /* Count characters until null terminator or newline */
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    printf("Length of string = %d\n", length);

    return 0;
}
