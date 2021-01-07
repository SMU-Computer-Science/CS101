#include <stdio.h>
#include <string.h>

int last_index_of(int numbers[], int n) {
    if (numbers[n - 1] != '\0') {
        return numbers[n - 1];
    } else {
        return -1;
    }
}

int main(void) {
    int numbers[] = {1, 2, 3, 4, 5};
    printf("%d\n", last_index_of(numbers, 5));
    // think of your own test cases
}