#include <stdio.h>

int bubble_sort(int *array, int size) {

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                int temp;
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    return 0;
}

double get_median(int numbers[], int length) {
    if (length == 0) {
        return 0;
    }
    bubble_sort(numbers, length);
    // print_array(numbers, length);

    int middle = length / 2;

    double median = numbers[middle];

    if (length % 2 == 0) {
        median += numbers[middle - 1];
        median /= 2;
    }

    return median;
}

// int get_median(int array[]){
//   if(){
//   }
// }

void print_array(int values[], int length) {
    for (int i = 0; i < length; i++) {
        printf("%d ", values[i]);
    }
    printf("\n");
}

int main(void) {
    {
        printf("Test 1\n");
        int values[] = {1, 3, 5};
        double result = get_median(values, sizeof(values) / sizeof(int));
        printf("Expected:3.0\n");
        printf("Actual  :%.1lf\n", result);
        printf("\n");
    }

    {
        printf("Test 2\n");
        int values[] = {20, 3, 5, 2, 10, 2, 4, 6, 8, 10};
        double result = get_median(values, sizeof(values) / sizeof(int));
        printf("Expected:5.5\n");
        printf("Actual  :%.1lf\n", result);
        printf("\n");
    }

    {
        printf("Test 3\n");
        int values[] = {20, 4, 2, 10, 2, 4};
        int result = get_median(values, sizeof(values) / sizeof(int));
        printf("Expected:4.0\n");
        printf("Actual  :%.1lf\n", result);
        printf("\n");
    }

    {
        printf("Test 4\n");
        int values[] = {};
        int result = get_median(values, sizeof(values) / sizeof(int));
        printf("Expected:0\n");
        printf("Actual  :%.1lf\n", result);
        printf("\n");
    }
}
