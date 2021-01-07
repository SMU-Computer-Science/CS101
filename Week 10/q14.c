#include <stdio.h>



void longest_common_suffix(char *s1, char *s2, char *s3){
    int len = 0;
    char *temp = s1;
    while(*temp != '\0'){
        len++;
        temp++;
    }
    char *temp2 = s2;
    int len2 = 0;
    while(*temp2 != '\0'){
        len2++;
        temp2++;
    }
    if(len > len2){
        s1 += len - len2;
    } else{
        s2 += len2-len;
    }
    char *temp3 = s3;
    while(*s1!= '\0'){
        if(*s1 == *s2){
            *s3 = *s1;
            s3++;
        } 
        if(*s1 != *s2){
            s3 = temp3;
        }
        s1++;
        s2++;
    }
    *s3 = '\0';

}

int main(void) {
    {
        char *s1 = "incident";
        char *s2 = "accident";
        char s3[20];
        longest_common_suffix(s1, s2, s3);
        printf("Test 1\n");
        printf("Expected:cident\n");
        printf("Actual  :%s\n", s3);
        printf("\n");
    }

    {
        char *s1 = "crocodile";
        char *s2 = "horse";
        char s3[20];
        longest_common_suffix(s1, s2, s3);
        printf("Test 2\n");
        printf("Expected:e\n");
        printf("Actual  :%s\n", s3);
        printf("\n");
    }

    {
        char *s1 = "eat";
        char *s2 = "treat";
        char s3[20];
        longest_common_suffix(s1, s2, s3);
        printf("Test 3\n");
        printf("Expected:eat\n");
        printf("Actual  :%s\n", s3);
        printf("\n");
    }

    {
        char *s1 = "discontent";
        char *s2 = "discontinue";
        char s3[20];
        longest_common_suffix(s1, s2, s3);
        printf("Test 4\n");
        printf("Expected:><\n");
        printf("Actual  :>%s<\n", s3);
        printf("\n");
    }
}