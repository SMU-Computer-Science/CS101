#include <math.h>
#include <stdio.h>

void print_expanded_form(int num) {

    if (num <= 0) {
        printf("Invaild Input!");
    }
    if (num > 0) {
        int num02 = num;
        int count = 0;

        while (num != 0) {
            num /= 10;
            count++;
        }

        int iter = count;
        int first = 0;
        int temp = 0;

        for (int i = iter; i >= 0; i--) {
            int divide = (num02 / pow(10, i - 1));
            first = divide * (pow(10, i - 1));
            if (i == count) {
                temp = first;
                printf("+%d ", temp);
            }
            if (divide % 10 == 0) {
                continue;
            }

            int extra0 = first - temp;
            if (extra0 != 0) {
                printf(" + %d", extra0);
                temp += extra0;
            }
        }
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