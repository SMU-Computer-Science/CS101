#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *get_email(char *string) {
    bool address = false;

    while (*string != '\0') {

        char *temp = string;
        int count = 0;

        while (*temp != ' ' && *temp != '\0') {

            if (*temp == '@') {
                address = true;
            }
            count++;
            temp++;
        }

        if (address) {
            char *ptr = malloc((count + 1) * sizeof(char));

            char *temp2 = ptr;

            while (*string != ' ' && *string != '\0') {
                *ptr = *string;
                string++;
                ptr++;
            }
            *ptr = '\0';
            return temp2;
        }
        string += count + 1;
    }

    return NULL;
}

int main(void) {
    {
        char *result = get_email("my email is apple@gmail.com do keep in touch");
        printf("Expected:[apple@gmail.com]\n");
        printf("Actual  :[%s]\n", result);
        free(result);
        printf("\n");
    }

    {
        char *result = get_email("apple@gmail.com is my email");
        printf("Expected:[apple@gmail.com]\n");
        printf("Actual  :[%s]\n", result);
        free(result);
        printf("\n");
    }

    {
        char *result = get_email("My email is orange@smu.edu.sg");
        printf("Expected:[orange@smu.edu.sg]\n");
        printf("Actual  :[%s]\n", result);
        free(result);
        printf("\n");
    }
}
