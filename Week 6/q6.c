#include <stdio.h>

int factorial(int num) {
    int sum = 1;
    for (int i = 1; i <= num; i++) {
        sum *= i;
    }
    return sum;
}
int binomial(int num, int r) {
    return factorial(num) / (factorial(num - r) * factorial(r));
}

void print_pascal(int num) {
    for (int i = 0; i <= num - 1; i++) {
        printf("\n");
        for (int j = 0; j <= i; j++) {
            printf("%d ", binomial(i, j));
        }
    }
}

int main(void) {
    printf("Test 1\n");
    printf("Expected:\n");
    printf("1 \n");
    printf("1 1\n");
    printf("1 2 1\n");
    printf("1 3 3 1\n");
    printf("1 4 6 4 1\n");
    printf("Actual:\n");
    print_pascal(5);
    printf("\n");

    printf("Test 2\n");
    printf("Expected:\n");
    printf("1\n");
    printf("1 1\n");
    printf("1 2 1\n");
    printf("1 3 3 1\n");
    printf("1 4 6 4 1\n");
    printf("1 5 10 10 5 1\n");
    printf("1 6 15 20 15 6 1\n");
    printf("1 7 21 35 35 21 7 1\n");
    printf("1 8 28 56 70 56 28 8 1\n");
    printf("1 9 36 84 126 126 84 36 9 1\n");
    printf("Actual:\n");
    print_pascal(10);
}
