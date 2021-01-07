#include <stdio.h>
#include <string.h>

int index_of(int numbers[], int n) {
    if (numbers[0] != '\0') {
        return numbers[0];
    } else {
        return -1;
    }
}

int main(void) {
    int numbers[] = {1, 2, 3, 4, 5};
    printf("%d\n", index_of(numbers, 5));
    // think of your own test cases
}