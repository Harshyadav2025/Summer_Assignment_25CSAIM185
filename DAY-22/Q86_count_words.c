/*
 * Q86: Count words in a sentence
 * Day-22 | Admission No: 25CSAIM290
 */

#include <stdio.h>

int main() {
    char str[500];
    int wordCount = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    /* Count words by detecting transitions from space to non-space */
    int inWord = 0;
    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (str[i] != ' ' && str[i] != '\t') {
            if (!inWord) {
                wordCount++;
                inWord = 1;
            }
        } else {
            inWord = 0;
        }
    }

    printf("Number of words = %d\n", wordCount);

    return 0;
}
