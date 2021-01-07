#include <stdio.h>
#include <string.h>

void reverse_words(char sentence[]) {

    int length = strlen(sentence);
    int i, j, start, end;

    end = length - 1;
    for (i = end; i >= 0; i--) {
        if (sentence[i] == ' ' || i == 0) {
            if (i == 0) {
                start = 0;
            } else {
                start = i + 1;
            }
            for (j = start; j <= end; j++) {
                printf("%c", sentence[j]);
            }
            end = i - 1;
            printf(" ");
        }
    }
}

int main(void) {
    {
        printf("Test 1\n");
        char sentence[] = "apple and orange";
        printf("Expected:orange and apple \n");
        printf("Actual  :");
        reverse_words(sentence);
        printf("\n");
    }

    {
        printf("Test 2\n");
        char sentence[] = "I sell seashell by the seashore";
        printf("Expected:seashore the by seashell sell I\n");
        printf("Actual  :");
        reverse_words(sentence);
        printf("\n");
    }

    {
        printf("Test 3\n");
        char sentence[] = "I";
        reverse_words(sentence);
        printf("Expected:I\n");
        printf("Actual  :");
        reverse_words(sentence);
        printf("\n");
    }

    {
        printf("Test 4\n");
        char sentence[] = "";
        reverse_words(sentence);
        printf("Expected:><\n");
        printf("Actual  :");
        reverse_words(sentence);
        printf("\n");
    }
}
