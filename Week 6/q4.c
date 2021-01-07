#include <math.h>
#include <stdio.h>

void print_expanded_form(int num) {
    if (num <= 0) {
        printf("Invaild Input!");
    }
    int num02 = num;
    int count = 0;
    while (num != 0) {
        num /= 10;
        count++;
    }
    int last = 0;

    for (int i = 0; i < count; i++) {
        last = (num02 % 10) * pow(10, i);
        num02 /= 10;
        if (last == 0) {
            continue;
        }
        printf("+%d ", last);
    }
}

int main(void) {
    printf("Test 1\n");
    printf("Expected:");
    printf("10 + 2\n");
    printf("Actual  :");
    print_expanded_form(12);
    printf("\n");

    printf("Test 2\n");
    printf("Expected:");
    printf("100 + 20 + 3\n");
    printf("Actual  :");
    print_expanded_form(123);
    printf("\n");

    printf("Test 3\n");
    printf("Expected:");
    printf("100000 + 4\n");
    printf("Actual  :");
    print_expanded_form(100004);
    printf("\n");

    printf("Test 4\n");
    printf("Expected:");
    printf("Invalid Input!\n");
    printf("Actual  :");
    print_expanded_form(0);
    printf("\n");

    printf("Test 5\n");
    printf("Expected:");
    printf("Invalid Input!\n");
    printf("Actual  :");
    print_expanded_form(-163);
    printf("\n");
}