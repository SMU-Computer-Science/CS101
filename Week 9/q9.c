#include <stdbool.h>
#include <stdio.h>

char *my_strstr(char *haystack, char *needle) {

    if (*needle == '\0') {
        return haystack;
    }
    int i = 0;
    int count = 0;
    while (needle[i] != '\0') {
        i++;
        count++;
    }
    i = 0;
    bool stringwhole = true;
    while (haystack[i] != '\0') {
        if (haystack[i] == needle[0]) {
            for (int j = 0; j < count; j++) {
                if (haystack[i + j] != needle[j]) {
                    stringwhole = false;
                    break;
                }
            }
            if (stringwhole) {
                return haystack + i;
            }
        }
        stringwhole = true;
        i++;
    }
    return NULL;
}

int main(void) {
    {
        char *haystack = "this is a simple string";
        char *needle = "simple";
        printf("Test 1\n");
        printf("Expected:simple string\n");
        printf("Actual  :%s\n", my_strstr(haystack, needle));
        printf("\n");
    }

    {
        char *haystack = "this is a simple string";
        char *needle = "";
        printf("Test 2\n");
        printf("Expected:this is a simple string\n");
        printf("Actual  :%s\n", my_strstr(haystack, needle));
        printf("\n");
    }

    {
        char *haystack = "C is a wonderful language";
        char *needle = "Python";
        printf("Test 3\n");
        printf("Expected:(null)\n");
        printf("Actual  :%s\n", my_strstr(haystack, needle));
        printf("\n");
    }

    {
        char *haystack = "apples and oranges";
        char *needle = "apple";
        printf("Test 4\n");
        printf("Expected:apples and oranges\n");
        printf("Actual  :%s\n", my_strstr(haystack, needle));
        printf("\n");
    }

    {
        char *haystack = "apples and oranges";
        char *needle = "orange";
        printf("Test 5\n");
        printf("Expected:oranges\n");
        printf("Actual  :%s\n", my_strstr(haystack, needle));
        printf("\n");
    }

    {
        char *haystack = "apples and orange";
        char *needle = "orangest";
        printf("Test 6\n");
        printf("Expected:(null)\n");
        printf("Actual  :%s\n", my_strstr(haystack, needle));
        printf("\n");
    }
}