#include <stdbool.h>
#include <stdio.h>

int my_strspn(char *s1, char *s2) {
    //count string s1

    int s1count = 0;
    char x = 0;
    do {
        x = s1[s1count];
        s1count++;
    } while (x != 0);
    s1count -= 1;

    int s2count = 0;
    char y = 0;
    do {
        y = s2[s2count];
        s2count++;
    } while (y != 0);
    s2count -= 1;
    //exceptions

    int go = 0;
    for (int i = 0; i < s2count; i++) {
        if (s1[0] == s2[i]) {
            go++;
        }
    }

    int count = 0;
    if (go >= 1) {
        for (int i = 0; i < s2count; i++) {
            for (int j = 0; j < s1count; j++) {
                if (s2[i] == s1[j]) {
                    count++;
                } else {
                    continue;
                }
            }
        }
        return count;
    } else {
        return count;
    }
}

int main(void) {
    {
        char string[] = "apple123";
        char chars[] = "1234567890";
        printf("Test 1\n");
        printf("Expected:0\n");
        printf("Actual  :%d\n", my_strspn(string, chars));
        printf("\n");
    }

    {
        char string[] = "apple123";
        char chars[] = "abc";
        printf("Test 2\n");
        printf("Expected:1\n");
        printf("Actual  :%d\n", my_strspn(string, chars));
        printf("\n");
    }

    {
        char string[] = "apple123";
        char chars[] = "lap";
        printf("Test 3\n");
        printf("Expected:4\n");
        printf("Actual  :%d\n", my_strspn(string, chars));
        printf("\n");
    }

    {
        char string[] = "";
        char chars[] = "lap";
        printf("Test 4\n");
        printf("Expected:0\n");
        printf("Actual  :%d\n", my_strspn(string, chars));
        printf("\n");
    }
}