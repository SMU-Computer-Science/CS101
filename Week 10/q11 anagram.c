#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool is_all_zeroes(int array[], int len) {
    for (int i = 0; i < len; i++) {
    
        if (array[i] != 0) {
            
            return false;
        }
    }

    return true;
}

bool is_anagram(char *s1, char *s2){
    if(strlen(s1) != strlen(s2)){
        return false;
    }

    int freq[27] = {0};
    
    for(int i = 0; i < strlen(s1); i++){
        if(s1[i] != ' '){  
        freq[s1[i] -'a']++;
        }
        if(s2[i] != ' '){
        freq[s2[i] -'a']--;
        }
    }
    return is_all_zeroes(freq, 27);
}

// bool is_anagram(char *word1, char *word2) {
//     int freq1[26] = {0};
//     while (*word1 != '\0') {
//         if(*word1 != ' '){
//         int pos = *word1 - 'a';
//         freq1[pos]++;
//         }
//         word1++;
//     }

//     int freq2[26] = {0};
//     while (*word2 != '\0') {
//         if (*word2 != ' '){
//         int pos = *word2 - 'a';
//         freq2[pos]++;
//         }
//          word2++;
//     }

//     for (int i = 0; i < 26; i++) {
//         if (freq1[i] != freq2[i]) {
//             return false;
//         }
//     }
//     return true;
// }


int main(void) {
    {
        printf("Test 1:%s\n", is_anagram("listen", "silent") ? "Pass" : "Fail");
        printf("\n");
    }

    {
        printf("Test 2:%s\n", is_anagram("rail safety", "fairy tales") ? "Pass" : "Fail");
        printf("\n");
    }

    {
        printf("Test 3:%s\n", is_anagram("restful", "fluster") ? "Pass" : "Fail");
        printf("\n");
    }

    {
        printf("Test 4:%s\n", is_anagram("restfully", "fluttering") ? "Fail" : "Pass");
        printf("\n");
    }

    {
        printf("Test 5:%s\n", is_anagram("", "") ? "Pass" : "Fail");
        printf("\n");
    }
}
