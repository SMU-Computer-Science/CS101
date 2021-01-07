#include <stdbool.h>
#include <stdio.h>
bool verify(char *card) {
    int size = strlen(card);
    int sum = 0;
    int cardnum = 0;

    for (int i = 0; i < size; i += 2) {
        cardnum = card[i] - 48;
        cardnum *= 2;
        if (cardnum >= 10) {
            cardnum -= 9;
        }
        sum += cardnum;
    }
    for (int i = 1; i < size; i += 2) {
        cardnum = card[i] - 48;
        sum += cardnum;
    }
    if (sum % 10 == 0) {
        return true;
    } else {
        return false;
    }
}

int main(void) {
    {
        char *card = "2323200577663554";
        printf("Test 1\n");
        printf("Expected:true\n");
        printf("Actual  :%s\n", verify(card) ? "true" : "false");
        printf("\n");
    }

    {
        char *card = "4041422060806790";
        printf("Test 2\n");
        printf("Expected:true\n");
        printf("Actual  :%s\n", verify(card) ? "true" : "false");
        printf("\n");
    }

    {
        char *card = "5222747000084993";
        printf("Test 3\n");
        printf("Expected:true\n");
        printf("Actual  :%s\n", verify(card) ? "true" : "false");
        printf("\n");
    }

    {
        char *card = "5256392810443201";
        printf("Test 4\n");
        printf("Expected:true\n");
        printf("Actual  :%s\n", verify(card) ? "true" : "false");
        printf("\n");
    }

    {
        char *card = "5256392810443202";
        printf("Test 5\n");
        printf("Expected:false\n");
        printf("Actual  :%s\n", verify(card) ? "true" : "false");
        printf("\n");
    }
    {
        char *card = "2022";
        printf("Test 6\n");
        printf("Expected:true\n");
        printf("Actual  :%s\n", verify(card) ? "true" : "false");
        printf("\n");
    }
}