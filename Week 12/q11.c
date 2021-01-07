#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

bool is_smu (char *str){
    char *p = "@smu.edu.sg";
    while(*str != '\0'){
        if(*str == '@'){
            while(*str != '\0'){
                if(*str != *p){
                    return false;
                }
                str++;
                p++;
            }
            return true;
        }
        str++;
    }

    return false;
}

int main(void) {
    char * ptr = malloc(100 * sizeof(char));
    // char arr[100];
    printf("Please enter your SMU email address:");
    scanf("%s", ptr);
    
    while(!is_smu(ptr)){
        
        printf("Invalid\n");
        printf("Please enter your SMU email address:");
        scanf("%s", ptr);
    }
    printf("Valid\n");

    free(ptr);
}