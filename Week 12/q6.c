#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

// char *get_repeated_lowercase_letters(char *string){
//     int freq[26] = {0};

//     int count = 0;
//     while(*string != '\0'){
//         if(*string - 'a' >= 0 && *string - 'a' <= 25 ){
//             if(freq[*string - 'a'] > 0){
//                 count++;
//             }
//             freq[*string - 'a']++;
            
//         }
//         string++;
//     }

//     char *ptr = malloc((count +1 )*sizeof(char));
    
//     int k = 0;

//     for(int i = 0; i < 26; i++){
//         if(freq[i] > 1){
//             ptr[k] = i + 'a';
//             k++;
//         }
//     }
//     ptr[k] = '\0';
//     return ptr;
// }

void bubble_sort(char values[], int size) { 
    for (int i = 0; i < size; i++) { 
        for (int j = 0; j < size - i - 1; j++) { 
            if (values[j] > values[j + 1]) { 
                int tmp = values[j]; 
                values[j] = values[j + 1]; 
                values[j + 1] = tmp; 
            } 
        } 
    } 
} 
 
char *get_repeated_lowercase_letters(char string[]) { 
    int len = strlen(string); 
    // printf("len: %d\n", len); 
    char *result = calloc(len, sizeof(char)); 
 
    int n = 0; 
    int m = 0;
    
 
    for (int i = 0; i < len; i++) { 
        
        for (int j = i + 1; j < len; j++) {
        
            if (string[i] == string[j] && isalpha(string[i])) { 
                //bool repeat = false;
                // for(int k = 0; k <n;k++){
                //     if(result[k] == string[i]){
                //         repeat = true;
                //     }
                // }
                //if(!repeat){
                    result[n] = string[i];
                   
                    n++; 
               //}
            } 
        } 
    }
    bubble_sort(result, n); 
    for (int i = 0; i < n; i++) { 
        // printf("i: %d\n", i); 
        if (result[i] != result[i + 1]) { 
            printf("result[i]: %c\n", result[i]); 
            result[m++] = result[i]; 
        } 
    }
    result[m] = '\0';
    //printf("%s", result);
   
    return result; 
}

int main(void) {
    int tc_num  = 1;
    {
        char *result = get_repeated_lowercase_letters("abca");
        printf("Test Case %d\n", tc_num++);
        printf("Expected:a\n");
        printf("Actual  :%s\n", result);
        free(result);
        printf("\n");
    }

    {
        char *result = get_repeated_lowercase_letters("The cat jumps over the wall.");
        printf("Test Case %d\n", tc_num++);
        printf("Expected:aehlt\n");
        printf("Actual  :%s\n", result);
        free(result);
        printf("\n");
    }

    {
        char *result = get_repeated_lowercase_letters("...");
        printf("Test Case %d\n", tc_num++);
        printf("Expected:[]\n");
        printf("Actual  :[%s]\n", result);
        free(result);
        printf("\n");
    }
}