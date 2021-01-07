#include <stdio.h>
#include <string.h>

int count_num_vowels(char sentence[]) {
    int size = strlen(sentence);
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (sentence[i] == 'a' || sentence[i] == 'e') {
            count++;
        }
        if (sentence[i] == 'i' || sentence[i] == 'o') {
            count++;
        }
        if (sentence[i] == 'u') {
            count++;
        }
    }
    return count;
}
int main(void) {
    {
        printf("Test 1\n");
        int result = count_num_vowels("The brown fox jumps over the wall");
        printf("Expected:8\n");
        printf("Actual  :%d\n", result);
        printf("\n");
    }

    {
        printf("Test 2\n");
        int result = count_num_vowels("Tht wld nt b pssbl. Nglsh wrds mst hv vwls.");
        printf("Expected:0\n");
        printf("Actual  :%d\n", result);
        printf("\n");
    }

    {
        printf("Test 3\n");
        int result = count_num_vowels("");
        printf("Expected:0\n");
        printf("Actual  :%d\n", result);
        printf("\n");
    }
}
