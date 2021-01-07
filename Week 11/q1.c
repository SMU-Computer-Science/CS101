#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char * repeat(char * string, int times){
    char *new = malloc((strlen(string) * times + 1) * sizeof(char));
    *new = '\0';
    for(int i  = 0; i < times; i++){
        strcat(new, string);
    }
    return new;
}

// char *repeat (char *string, int times){
//     int len = strlen(string);
//     char *new  = malloc(sizeof(char) * (times * len + 1));
//     char *temp2 = new; 
//     int i = 0;
//     char *temp  = string;
//     while(i != times){
//         string = temp;
//         while(*string != '\0'){
//             *new = *string;
//             new++;
//             string++;
//         }
//         i++;
//     }
//     *new = '\0';
//     new = temp2;    
//     return new;
    
// }

//use strcat but remember to add '\0'.




int main(void) {
    int tc_num = 1;
    {
        char *result = repeat("a", 3);
        printf("Test case %d\n", tc_num++);
        printf("Expected:aaa\n");
        printf("Actual  :%s\n", result);
        free(result);
        printf("\n");
    }

        {
        char *result = repeat("", 3);
        printf("Test case %d\n", tc_num++);
        printf("Expected:[]\n");
        printf("Actual  :[%s]\n", result);
        free(result);
        printf("\n");
    }

    {
        char *result = repeat("Happy Happy Happy ", 5);
        printf("Test case %d\n", tc_num++);
        printf("Expected:[Happy Happy Happy Happy Happy Happy Happy Happy Happy Happy Happy Happy Happy Happy Happy ]\n");
        printf("Actual  :[%s]\n", result);
        free(result);
        printf("\n");
    }
    // char *result = malloc(10 * sizeof(char));
    // memset(result, 0, 10);
    // strcat(result, "abc");
    // printf("%s\n", result);
}
