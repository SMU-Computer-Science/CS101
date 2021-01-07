#include <stdio.h>

int main(void) {
    char c;
    printf("Enter letter:");
    scanf(" %c", &c);

    while ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        switch (c) {
            case 'a': case 'e': case 'i': case 'o': case 'u': 
            case 'A': case 'E': case 'I': case 'O': case 'U':
                printf("vowel\n");
                break;
            default:
                printf("consonants\n");
                break;
        }
        
        printf("Enter letter:");
        scanf(" %c", &c);
    }

    printf("Bye bye\n");


    
}