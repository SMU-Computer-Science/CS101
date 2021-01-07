#include <stdio.h>

int main(void) {
    char c;
    printf("Enter letter:");
    scanf(" %c", &c);

    while ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        if (c == 'a' || c == 'A') {
            printf("vowel\n");
        } else if (c == 'e' || c == 'E') {
            printf("vowel\n");
        } else if (c == 'i' || c == 'I') {
            printf("vowel\n");
        } else if (c == 'o' || c == 'O') {
            printf("vowel\n");
        } else if (c == 'u' || c == 'U') {
            printf("vowel\n");
        } else {
            printf("consonants\n");
        }

        printf("Enter letter:");
        scanf(" %c", &c);
    }

    printf("Bye bye\n");
}