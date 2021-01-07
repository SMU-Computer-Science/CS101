#include <stdio.h>

int main(void) {
    char ch;
    printf("Enter char:");
    scanf("%c", &ch);

    if (ch >= '0' && ch <= '9') {
        printf("%c is a digit\n", ch);
    } else if (ch >= 'a' && ch <= 'z') {
        printf("%c is a lowercase letter\n", ch);
    } else if (ch >= 'A' && ch <= 'Z') {
        printf("%c is a uppercase letter\n", ch);
    } else {
        printf("%c is a special character\n", ch);
    }
}