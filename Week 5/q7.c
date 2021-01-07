#include <stdbool.h>
#include <stdio.h>
int is_binary_number(int n1) {
    n1 = n1 % 10;
    while (n1 != 0) {
        if (n1 != 1 && n1 != 0) {
            return false;
        }
        if (n1 == 1 || n1 == 0) {
            return true;
        }
    }
}

int main(void) {
    {
        printf("Test 1\n");
        bool result = is_binary_number(10);
        printf("Expected:Pass\n");
        printf("Actual  :%s\n\n", result ? "Pass" : "Fail");
    }

    {
        printf("Test 2\n");
        bool result = is_binary_number(8);
        printf("Expected:Fail\n");
        printf("Actual  :%s\n\n", result ? "Pass" : "Fail");
    }

    {
        printf("Test 3\n");
        bool result = is_binary_number(10111111);
        printf("Expected:Pass\n");
        printf("Actual  :%s\n\n", result ? "Pass" : "Fail");
    }
}
