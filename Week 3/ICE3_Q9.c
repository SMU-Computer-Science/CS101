#include <stdio.h>

int main(void) {
    int val;
    printf("Enter positive integer:");
    scanf("%d", &val);

    int sum = 0;
    for (int i = 1; i < val; i++) {
        if (val % i == 0) {
            sum += i;
        }
    }
    
    if (sum == val) {
        printf("%d is a perfect number\n", val);
    } else {
        printf("%d is not a perfect number\n", val);
    }
}