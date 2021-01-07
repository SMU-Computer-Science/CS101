#include <stdio.h>
#include <string.h>



char *get_longest_word(char **word, int size){
    
    int len = strlen(word[0]);
    int big = 0;

    for(int i  = 0; i < size; i++){
        if(strlen(word[i]) > len){
            len = strlen(word[i]);
            big = i;
        }
    }
    return word[big];

}

int main(void) {
    int tc_num = 1;
    {
        printf("Test Case %d\n", tc_num++);
        char *word[] = {"apple", "nut", "coconut"};
        printf("Expected:coconut\n");
        printf("Actual  :%s\n", get_longest_word(word, sizeof(word)/sizeof(char *)));
        printf("\n");
    }

    {
        printf("Test Case %d\n", tc_num++);
        char *word[] = {"coconut"};
        printf("Expected:coconut\n");
        printf("Actual  :%s\n", get_longest_word(word, sizeof(word)/sizeof(char *)));
        printf("\n");
    }

    {
        printf("Test Case %d\n", tc_num++);
        char *word[] = {""};
        printf("Expected:[]\n");
        printf("Actual  :[%s]\n", get_longest_word(word, sizeof(word)/sizeof(char *)));
        printf("\n");
    }
}