#include <stdio.h>
#include <string.h>

char reverse(char word[]) {
    int size = strlen(word);
    int back = size - 1;
    for (int i = 0; i < size / 2; i++) {
        if (i == size - i) {
            continue;
        }
        char temp = word[i];      //apple 'a'
        word[i] = word[back - i]; //epple
        word[back - i] = temp;
    }
    return *word;
}

int main(void) {
    {
        printf("Test 1\n");
        char word[] = "apple";
        reverse(word);
        printf("Expected:elppa\n");
        printf("Actual  :%s\n", word);
        printf("\n");
    }

    {
        printf("Test 2\n");
        char word[] = "pear";
        reverse(word);
        printf("Expected:raep\n");
        printf("Actual  :%s\n", word);
        printf("\n");
    }

    {
        printf("Test 3\n");
        char word[] = "a";
        reverse(word);
        printf("Expected:a\n");
        printf("Actual  :%s\n", word);
        printf("\n");
    }

    {
        printf("Test 4\n");
        char word[] = "";
        reverse(word);
        printf("Expected:><\n");
        printf("Actual  :>%s<\n", word);
        printf("\n");
    }
}
