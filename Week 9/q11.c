#include <stdio.h>
#include <string.h>
char encode(char *plaintext, char *ciphertext, int key) {
    int plaintextcount = 0;
    char x = 0;
    do {
        x = plaintext[plaintextcount];
        plaintextcount++;
    } while (x != 0);
    plaintextcount -= 1;

    int converted[plaintextcount];

    for (int i = 0; i < plaintextcount; i++) {
        if (plaintext[i] >= 97 && plaintext[i] <= 122) {
            char x = (plaintext[i] - 96);
            converted[i] = x;
        }
        if (plaintext[i] >= 65 && plaintext[i] <= 90) {
            char x = plaintext[i] - 64;
            converted[i] = x;
        }
    }
    int i = 0;
    for (int j = plaintextcount; j > 0; j--) {
        ciphertext[i] = converted[i] - key;
        printf("%c", ciphertext[i]);
        i++;
    }
    return *ciphertext;
}
int main(void) {
    {
        char *plaintext = "abc";
        char ciphertext[4] = {0};
        encode(plaintext, ciphertext, 1);
        printf("Test 1\n");
        printf("Expected:bcd\n");
        printf("Actual  :%s\n", ciphertext);
        printf("\n");
    }

    {
        char *plaintext = "abc";
        char ciphertext[4] = {0};
        encode(plaintext, ciphertext, 27);
        printf("Test 2\n");
        printf("Expected:bcd\n");
        printf("Actual  :%s\n", ciphertext);
        printf("\n");
    }

    {
        char *plaintext = "apples and oranges. Which do you prefer?";
        char ciphertext[45] = {0};
        encode(plaintext, ciphertext, 13);
        printf("Test 3\n");
        printf("Expected:nccyrf naq benatrf. Juvpu qb lbh cersre?\n");
        printf("Actual  :%s\n", ciphertext);
        printf("\n");
    }

    {
        char *plaintext = "###";
        char ciphertext[4] = {0};
        encode(plaintext, ciphertext, 13);
        printf("Test 4\n");
        printf("Expected:###\n");
        printf("Actual  :%s\n", ciphertext);
        printf("\n");
    }

    // ------
    /*
    {
        char *ciphertext = "bcd";
        char plaintext[4] = {0};
        decode(plaintext, ciphertext, 1);
        printf("Test 5\n");
        printf("Expected:abc\n");
        printf("Actual  :%s\n", plaintext);
        printf("\n");
    }

    {
        char *ciphertext = "bcd";
        char plaintext[4] = {0};
        decode(plaintext, ciphertext, 27);
        printf("Test 6\n");
        printf("Expected:abc\n");
        printf("Actual  :%s\n", plaintext);
        printf("\n");
    }

    {
        char *ciphertext = "P gur yvtug ng gur raq bs gur ghaary";
        char plaintext[40] = {0};
        decode(plaintext, ciphertext, 13);
        printf("Test 7\n");
        printf("Expected:C the light at the end of the tunnel\n");
        printf("Actual  :%s\n", plaintext);
        printf("\n");
    }

    {
        char *ciphertext = "abc 123";
        char plaintext[40] = {0};
        decode(plaintext, ciphertext, 26);
        printf("Test 7\n");
        printf("Expected:abc 123\n");
        printf("Actual  :%s\n", plaintext);
        printf("\n");
    }
    */
}
