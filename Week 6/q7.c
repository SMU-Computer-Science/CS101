#include <stdio.h>

void print_array(int values[], int length) {
    for (int i = 0; i < length; i++) {
        printf("%d ", values[i]);
    }
    printf("\n");
}

int bubble_sort(int num[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (num[j] > num[j + 1]) {
                int temp;
                temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }
    return 0;
}

int main(void) {
    {
        int values[] = {4, 4, 1, 5, 3, 2, 9, 7, 9, 10, 7};
        bubble_sort(values, sizeof(values) / sizeof(int));
        printf("Expected:1 2 3 4 4 5 7 7 9 9 10\n");
        printf("Actual  :");
        print_array(values, sizeof(values) / sizeof(int));
        printf("\n");
    }
}