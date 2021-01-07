#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<ctype.h>


char get_highest_occurring_character(char *string){
    if(*string  == '\0'){
        return '\0';
    }
    
    int freq[26] = {0};

    while(*string != '\0'){
        
        if(*string >= 'a' && *string <= 'z' ){
            freq[*string - 'a']++;           
        } else if (*string >= 'A' && *string <= 'Z' ){
            freq[*string - 'A']++;   
        }
        string++;
    }
    int count = 0;
    int k;
    for(int i = 0; i < 26; i++){
        if(freq[i] > count){
            count = freq[i];
            k = i;
        }
    }
    return 'a' + k;
    
}

int main(void) {
    int tc_num  = 1;
    {
        char result = get_highest_occurring_character("abbba");
        printf("Test Case %d\n", tc_num++);
        printf("Expected:b\n");
        printf("Actual  :%c\n", result);
        printf("\n");
    }

    {
        char result = get_highest_occurring_character("Apple ACE Car code coke");
        printf("Test Case %d\n", tc_num++);
        printf("Expected:c\n");
        printf("Actual  :%c\n", result);
        printf("\n");
    }

    {
        char result = get_highest_occurring_character("");
        printf("Test Case %d\n", tc_num++);
        printf("Expected:True\n");
        printf("Actual  :%s\n", result == '\0' ? "True" : "False");
        printf("\n");
    }
}