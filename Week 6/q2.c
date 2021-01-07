#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int gcd(int num1, int num2) {

    int greatest = 0;
    if (num1 < 0) {
        num1 *= -1;
    }
    if (num2 < 0) {
        num2 *= -1;
    }

    for (int i = 1; i <= num1; i++) { //9
        if (num1 % i == 0 && num2 % i == 0) {
            int common = i;
            if (common > greatest) {
                greatest = common;
            }
        }
    }
    return greatest;
}

int main(void) {
    {
        printf("Test 1\n");
        printf("Expected:3\n");
        int result = gcd(9, 12);
        printf("Actual  :%d\n", result);
        printf("\n");
    }

    {
        printf("Test 2\n");
        printf("Expected:1\n");
        int result = gcd(1, 0);
        printf("Actual  :%d\n", result);
        printf("\n");
    }

    {
        printf("Test 3\n");
        printf("Expected:1\n");
        int result = gcd(3, 5);
        printf("Actual  :%d\n", result);
        printf("\n");
    }

    {
        printf("Test 4\n");
        printf("Expected:3\n");
        int result = gcd(-3, -6);
        printf("Actual  :%d\n", result);
        printf("\n");
    }

    {
        printf("Test 5\n");
        printf("Expected:3\n");
        int result = gcd(-3, -6);
        printf("Actual  :%d\n", result);
        printf("\n");
    }

    {
        printf("Test 5\n");
        printf("Expected:0\n");
        int result = gcd(0, 0);
        printf("Actual  :%d\n", result);
        printf("\n");
    }
}
