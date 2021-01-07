#include <stdio.h>
#include <string.h>

int range(int numbers[], int n) {

    int smallest = 0;
    int largest = 0;

    for (int i = 0; i < n; i++) {

        if (largest < numbers[i]) {
            largest = numbers[i];
        }
        if (smallest > numbers[i]) {
            smallest = numbers[i];
        }
    }

    int difference = largest - smallest;
    return difference;
}

int main(void) {
    int numbers[] = {5, 7, 19, 2, 3, 5};
    printf("%d\n", range(numbers, 6));
    // think of your own test cases
}