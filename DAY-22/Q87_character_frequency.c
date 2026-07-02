/*
 * Q87: Character frequency in a string
 * Day-22 | Admission No: 25CSAIM290
 */

#include <stdio.h>

int main() {
    char str[200];
    int freq[256] = {0}; /* ASCII frequency table */

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    /* Count frequency of each character */
    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    printf("Character frequencies:\n");
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            printf("'%c' : %d\n", (char)i, freq[i]);
        }
    }

    return 0;
}
