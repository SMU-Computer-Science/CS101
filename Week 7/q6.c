#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool is_palindrome(char *string) {
    int size = strlen(string);
    char *start = malloc(size);
    char *flip = malloc(size);
    for(int i = 0; i< size; i ++){
        if(start[i] == ' '){
            start[i] = start[i+1];
            
        }
    }
    printf("%s",start);
}

int main(void) {
    {
        printf("Test 1\n");
        char string[] = "madam";
        bool result = is_palindrome(string);
        printf("Expected:True\n");
        printf("Actual  :%s\n", result ? "True" : "False");
        printf("\n");
    }

    {
        printf("Test 2\n");
        char string[] = "No 'x' in Nixon";
        bool result = is_palindrome(string);
        printf("Expected:True\n");
        printf("Actual  :%s\n", result ? "True" : "False");
        printf("\n");
    }

    {
        printf("Test 3\n");
        char string[] = "bad, chocolate dab";
        bool result = is_palindrome(string);
        printf("Expected:False\n");
        printf("Actual  :%s\n", result ? "True" : "False");
        printf("\n");
    }
}

// Sample Run 3:
// Enter the string :
// The string "bad, chocolate dab" is not a palindrome
