#include <stdio.h>
#include <string.h>
//unable to do testcase  3 and 6 

char merge(char *content1, char *content2, char *content3) {

    int content1count = strlen(content1);
    int content2count = strlen(content2);
    int total = content1count + content2count;

    if (content1count == content2count) {
        int j = 0;
        for (int i = 0; i < total; i += 2) {
            content3[i] = content1[j];
            content3[i + 1] = content2[j];
            j++;
        }
        return *content3;
    }

    if (content1count > content2count) {
        int difference = content1count - content2count;
        int startfrom = total - difference;
        int j = 0;
        for (int i = 0; i < content2count; i += 2) {
            content3[i] = content1[j];
            if (content3[i] == 0) {
                break;
            }
            content3[i + 1] = content2[j];
            j++;
        }
        for (int i = j; i < difference + 1; i++) {
            content3[startfrom] = content1[i];
            startfrom++;
        }
        return *content3;
    }

    if (content1count < content2count) {

        int difference = content2count - content1count;
        int startfrom = total - difference;
        int j = 0;

        for (int i = 0; i < content2count + 1; i += 2) {
            content3[i] = content1[j];
            if (content3[i] == 0) {
                break;
            }
            content3[i + 1] = content2[j];
            j++;
        }

        for (int i = j; i < content2count + difference; i++) {
            content3[startfrom] = content2[i];
            startfrom++;
        }
        return *content3;
    }
    return *content3;
}

int main(void) {
    {
        char *content1 = "abcde";
        char *content2 = "12345";
        char combined[100];
        merge(content1, content2, combined);
        printf("Test 1\n");
        printf("Expected:a1b2c3d4e5\n");
        printf("Actual  :%s\n", combined);
        printf("\n");
    }

    {
        char *content1 = "XYZ";
        char *content2 = "12345";
        char combined[100];
        merge(content1, content2, combined);
        printf("Test 2\n");
        printf("Expected:X1Y2Z345\n");
        printf("Actual  :%s\n", combined);
        printf("\n");
    }

    {
        char *content1 = "strawberry";
        char *content2 = "12";
        char combined[100];
        merge(content1, content2, combined);
        printf("Test 3\n");
        printf("Expected:s1t2rawberry\n");
        printf("Actual  :%s\n", combined);
        printf("\n");
    }

    {
        char *content1 = "strawberry";
        char *content2 = "";
        char combined[100];
        merge(content1, content2, combined);
        printf("Test 4\n");
        printf("Expected:strawberry\n");
        printf("Actual  :%s\n", combined);
        printf("\n");
    }

    {
        char *content1 = "";
        char *content2 = "durian";
        char combined[100];
        merge(content1, content2, combined);
        printf("Test 5\n");
        printf("Expected:durian\n");
        printf("Actual  :%s\n", combined);
        printf("\n");
    }

    {
        char *content1 = "";
        char *content2 = "";
        char combined[100];
        merge(content1, content2, combined);
        printf("Test 6\n");
        printf("Expected:><\n");
        printf("Actual  :>%s<\n", combined);
        printf("\n");
    }
}