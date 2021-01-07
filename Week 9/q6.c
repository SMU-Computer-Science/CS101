#include <stdio.h>

char my_strcpy(char *dest, char *src) {

    int destcount = 0;
    char x = 0;
    do {
        x = dest[destcount];
        destcount++;
    } while (x != 0);

    int srccount = 0;
    char y = 0;
    do {
        y = src[srccount];
        srccount++;
    } while (y != 0);

    for (int i = 0; i < srccount; i++) {
        dest[i] = src[i];
    }
    return *dest;
}

int main(void) {
    {
        char dest[10];
        char src[5] = "kiwi";
        my_strcpy(dest, src);
        printf("Test 1\n");
        printf("Expected:kiwi\n");
        printf("Actual  :%s\n", dest);
        printf("\n");
    }

    {
        char dest[10];
        char src[5] = "";
        my_strcpy(dest, src);
        printf("Test 2\n");
        printf("Expected:><\n");
        printf("Actual  :>%s<\n", dest);
        printf("\n");
    }

    {
        char dest[10];
        char src[2] = "a";
        my_strcpy(dest, src);
        printf("Test 3\n");
        printf("Expected:a\n");
        printf("Actual  :%s\n", dest);
        printf("\n");
    }
}