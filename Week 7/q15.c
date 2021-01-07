
#include <stdio.h>

int mode(int numbers[], int n) {
    int max = 0;
    int maxCount = 0;
    int i = 0;
    int j = 0;

    for (i = 0; i < n; ++i) {
        int count = 0;

        for (j = 0; j < n; ++j) {
            if (numbers[j] == numbers[i])
                ++count;
        }
        if (count > maxCount) {
            maxCount = count;
            max = numbers[i];
        }
    }
    return max;
}

int main() {

    int numbers[] = {0, 2, 2, 2, 7};
    printf("%d\n", mode(numbers, 5));
}