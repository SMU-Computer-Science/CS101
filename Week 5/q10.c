#include <stdio.h>

int compare(int a, int b) {
    if (a > b) {
        return a;
    }
    return b;
}

int get_largest(int array[], int d) {
    int largest = 0;
    for (int i = 0; i < d; i++) {
        largest = compare(largest, array[i]);
    }
    return largest;
}

int main(void) {
    {
        printf("Test 1\n");
        int array[5] = {5, 7, 9, 11, 2};
        int result = get_largest(array, 5);
        printf("Expected:11\n");
        printf("Actual  :%d\n\n", result);
    }

    {
        printf("Test 2\n");
        int n = 5;
        int array[5] = {12, 7, 9, 11, 2};
        int result = get_largest(array, n);
        printf("Expected:12\n");
        printf("Actual  :%d\n\n", result);
    }

    {
        printf("Test 3\n");
        int n = 6;
        int array[6] = {12, 7, 9, 11, 1, 20};
        int result = get_largest(array, n);
        printf("Expected:20\n");
        printf("Actual  :%d\n\n", result);
    }

    {
        printf("Test 4\n");
        int n = 1;
        int array[1] = {12};
        int result = get_largest(array, n);
        printf("Expected:12\n");
        printf("Actual  :%d\n\n", result);
    }
}
