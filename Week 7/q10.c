#include <stdio.h>

char my_strcmp(char str1[], char str2[]) {
    int count = 0;
    char difference = 0;
    int i = 0;

    if (str1[i] == '\0') {
        int sum = 0;
        while (str2 != '\0') {
            sum += str2[i];
            i++;
        }
        sum *= -1;
        return sum;
    }
    if (str2[i] == '\0') {
        int sum = 0;
        while (str1 != '\0') {
            sum += str1[i];
            i++;
        }
        sum *= -1;
        return sum;
    }

    while (str1[i] != '\0' && str2[i] != '\0') {
        i++;
        if (str1[i] == str2[i]) {
            count++;
        } else {
            difference += str1[i] - str2[i];
        }
    }

    return difference;
}

int main(void) {
    {
        printf("Test 1\n");
        int result = my_strcmp("abc", "abb");
        printf("Expected:1\n");
        printf("Actual  :%d\n", result);
        printf("\n");
    }

    {
        printf("Test 2\n");
        int result = my_strcmp("ab", "abcdef");
        printf("Expected:-99\n");
        printf("Actual  :%d\n", result);
        printf("\n");
    }

    {
        printf("Test 3\n");
        int result = my_strcmp("abcdef", "ab");
        printf("Expected:99\n");
        printf("Actual  :%d\n", result);
        printf("\n");
    }

    {
        printf("Test 3\n");
        int result = my_strcmp("AB", "Ab");
        printf("Expected:-32\n");
        printf("Actual  :%d\n", result);
        printf("\n");
    }

    {
        printf("Test 4\n");
        int result = my_strcmp("", "Ab");
        printf("Expected:-65\n");
        printf("Actual  :%d\n", result);
        printf("\n");
    }
}
