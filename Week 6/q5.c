#include <math.h>
#include <stdio.h>

int get_smallest_pair(int num) {
    int num02 = num;
    if (num < 10) {
        return -1;
    }

    int digits = 0;
    while (num != 0) {
        num /= 10;
        digits++;
    }
    int smallest_pair = 100;
    for (int i = 1; i < digits; i++) {
        int last = num02 % 10;
        int some_pair = ((num02 / 10) % 10) * 10 + last;
        if (some_pair < smallest_pair) {
            smallest_pair = some_pair;
        }
        num02 /= 10;
    }
    return smallest_pair;
}

int main(void) {
    {
        printf("Test 1\n");
        printf("Expected:23\n");
        int result = get_smallest_pair(2345);
        printf("Actual  :%d\n", result);
        printf("\n");
    }

    {
        printf("Test 2\n");
        printf("Expected:2\n");
        int result = get_smallest_pair(10245);
        printf("Actual  :%d\n", result);
        printf("\n");
    }

    {
        printf("Test 3\n");
        printf("Expected:-1\n");
        int result = get_smallest_pair(1);
        printf("Actual  :%d\n", result);
        printf("\n");
    }

    {
        printf("Test 4\n");
        printf("Expected:10\n");
        int result = get_smallest_pair(10);
        printf("Actual  :%d\n", result);
        printf("\n");
    }
}
