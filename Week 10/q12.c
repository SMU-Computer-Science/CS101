#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>
#include<ctype.h>

void swap (char *a, char *b) 
{ 
    char temp = *a; 
    *a = *b; 
    *b = temp; 
} 

void randomize ( char arr[], int n ) 
{ 
    // Use a different seed value so that we don't get same 
    // result each time we run this program 
    srand ( time(NULL) ); 
  
    // Start from the last element and swap one by one. We don't 
    // need to run for the first element that's why i > 0 
    for (int i = n-2; i > 0; i--) 
    { 
        // Pick a random index from 0 to i 
        int j = rand() % (i + 1); 
        
        while(j == 0){
            j = rand() % (i + 1); 
        }
            
        

        // Swap arr[i] with the element at random index 
        swap(&arr[i], &arr[j]); 
    } 
}

// void scramble(char *word) {

//     srand(time(NULL));

//     int n = strlen(word);
//     for (int i = 1; i < n - 2; i++) {
//         int random = rand() % (n - 1 - i) + i;
//         int temp = word[i];
//         word[i] = word[random];
//         word[random] = temp;
//     }
//     //printf("%s\n", word);
// }

// void scramble_sentence(char *orig, char *scrambled){
//     char *temp = orig;
//     int len = strlen(orig);
//     char *words[len];
//     words[0] = orig;
//     int k = 1;
//     while (*temp != '\0') {
//         if (*temp == ' ') {
//             *temp = '\0';
//             words[k] = temp + 1;
//             k++;
//         }
//         temp++;
//     }
//     temp = orig;
//     words[k] = NULL;
//     int i = 0;
    
//     while(k != 0){
//         if(strlen(words[i]) == 4){
//             char temps = words[i][1];
//             words[i][1] = words[i][2];
//             words[i][2] = temps;
//         }else{
//         randomize(words[i], strlen(words[i]));
//         }
//         int n = sprintf(scrambled, "%s", words[i]);
//         scrambled += n;
//         *scrambled = ' ';
//         scrambled++;
//         i++;
//         k--;
//     }
//     *(scrambled - 1) = '\0';
//     orig = temp;
// }

void scramble_sentence(char *orig, char *scrambled){
    
    // int length = strlen(orig);

    char *token_ptr = strtok(orig, " ");
   
    while (token_ptr != NULL) {
        char *temp = token_ptr;
        bool spec = false;

        while(*temp != '\0'){
            if(!isalpha(*temp) && !isdigit(*temp)){
                spec = true;
            }
            temp++;
        }

        int len = strlen(token_ptr);
        if(spec){
            len--;
            printf("hello");
        }
        randomize(token_ptr, len);
        int n = sprintf(scrambled, "%s", token_ptr);
        scrambled += n;
        *scrambled = ' ';
        scrambled++;
        token_ptr = strtok(NULL, " ");

    }
    *(scrambled-1) = '\0';
    // while(length != 0){
    //     if(*orig == '\0'){
    //         *orig = ' ';
    //     }
    //     orig++;
    //     length--;
    // }
    // *orig = '\0';

}


int main(void) {
    {
        char orig[] = "This is a sentence with 7 tokens";
        char scrambled[35];
        scramble_sentence(orig, scrambled);
        printf("Test 1\n");
        printf("Original :%s\n", orig);
        printf("Scrambled:%s\n", scrambled);
        printf("\n");
    }

    {
        char orig[] = "C is peculiar in a lot of ways, but it, like many other successful things, has a certain unity of approach that stems from development in a small group.";
        char scrambled[155];
        scramble_sentence(orig, scrambled);
        printf("Test 2\n");
        printf("Original :%s\n", orig);
        printf("Scrambled:%s\n", scrambled);
    }

    // {char test[] = "this";
    // scramble(test);
    // printf("%s\n", test);
    // }

    //     {char test[] = "this";
    // scramble(test);
    // printf("%s\n", test);
    // }
    //     {char test[] = "this";
    // scramble(test);
    // printf("%s\n", test);
    // }
}