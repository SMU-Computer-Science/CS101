#include <stdio.h>

char my_strupr(char *string) {
    int length = strlen(string);
    for (int i = 0; i < length; i++) {
        if ((string[i] >= 97) && (string[i] <= 122)) {
            string[i] = string[i] - 32;
        }
    }
    return *string;
}

int main(void) {
    {
        char string[] = "APPLE";
        my_strupr(string);
        printf("Test 1\n");
        printf("Expected:APPLE\n");
        printf("Actual  :%s\n", string);
        printf("\n");
    }

    {
        char string[] = "";
        my_strupr(string);
        printf("Test 2\n");
        printf("Expected:><\n");
        printf("Actual  :>%s<\n", string);
        printf("\n");
    }

    {
        char string[] = "There is 1 APPLE.";
        my_strupr(string);
        printf("Test 3\n");
        printf("Expected:THERE IS 1 APPLE.\n");
        printf("Actual  :%s\n", string);
        printf("\n");
    }

    {
        char string[] = "happy";
        my_strupr(string);
        printf("Test 4\n");
        printf("Expected:HAPPY\n");
        printf("Actual  :%s\n", string);
        printf("\n");
    }
}