/*
 * Q83: Count vowels and consonants in a string
 * Day-21 | Admission No: 25CSAIM290
 */

#include <stdio.h>

int isVowel(char c) {
    c = (c >= 'A' && c <= 'Z') ? c + 32 : c; /* Convert to lowercase */
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main() {
    char str[200];
    int vowels = 0, consonants = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        char c = str[i];
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
            if (isVowel(c)) {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    printf("Vowels     = %d\n", vowels);
    printf("Consonants = %d\n", consonants);

    return 0;
}
