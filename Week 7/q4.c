#include <stdio.h>
#include <string.h>

char exchange_pairs(char string[]) {

    int digits = strlen(string);
    if (digits % 2 == 0) {
        for (int i = 0; i < digits - 1; i += 2) {
            char temp = string[i];
            string[i] = string[i + 1];
            string[i + 1] = temp;
        }
    } else if (digits % 2 == 1) {
        for (int i = 0; i < digits - 1; i += 2) {
            char temp = string[i];
            string[i] = string[i + 1];
            string[i + 1] = temp;
        }
    }
    return *string;
}

void print_array(char string[]) {
    for (int i = 0; i < strlen(string); i++) {
        printf("%c", string[i]);
    }
    printf("\n");
}

int main(void) {
    {
        char string[] = "abcdef";
        exchange_pairs(string);
        printf("Expected:badcfe\n");
        printf("Actual  :");
        print_array(string);
        printf("\n");
    }

    {
        char string[] = "abcdefg";
        exchange_pairs(string);
        printf("Expected:badcfeg\n");
        printf("Actual  :");
        print_array(string);
        printf("\n");
    }

    {
        char string[] = "a";
        exchange_pairs(string);
        printf("Expected:a\n");
        printf("Actual  :");
        print_array(string);
        printf("\n");
    }
}
