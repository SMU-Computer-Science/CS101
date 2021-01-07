#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

bool is_good_password(char *string){
    bool upper = false;
    bool lower = false;
    bool num = false;
    int count = 0;
    while(*string != '\0'){
        if(isupper(*string)){
            upper = true;
        } else if(islower(*string)){
            lower = true;
        } else if(*string >= '0' && *string <= '9'){
            num = true;
        }
        string++;
        count++;
    }
    bool len = false;
    if(count >= 6 && count < 20){
        len = true;
    }
    
    if(upper && lower && num && len){
        return true;
    }
    return false;


}

int main(void) {
    {
        char *password = "abc";
        printf("Test 1:%s\n", is_good_password(password) ? "Fail" : "Pass");
        printf("\n");
    }

    {
        char *password = "Abcdefghijklmnopqrst1234";
        printf("Test 2:%s\n", is_good_password(password) ? "Fail" : "Pass");
        printf("\n");
    }

    {
        char *password = "abcdefgh";
        printf("Test 3:%s\n", is_good_password(password) ? "Fail" : "Pass");
        printf("\n");
    }

    {
        char *password = "Abcdefgh";
        printf("Test 4:%s\n", is_good_password(password) ? "Fail" : "Pass");
        printf("\n");
    }

    {
        char *password = "ABCD1234";
        printf("Test 5:%s\n", is_good_password(password) ? "Fail" : "Pass");
        printf("\n");
    }

    {
        char *password = "abcd1234";
        printf("Test 6:%s\n", is_good_password(password) ? "Fail" : "Pass");
        printf("\n");
    }

    {
        char *password = "abcd123A";
        printf("Test 7:%s\n", is_good_password(password) ? "Pass" : "Fail");
        printf("\n");
    }
}
