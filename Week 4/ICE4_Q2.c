#include <limits.h>
#include <stdio.h>

int main(void) {
    int num;
    printf("Enter number:");
    scanf("%d", &num);

    int largest = INT_MIN;
    int smallest = INT_MAX;

    while (num >= 0) {
        if (num > largest) {
            largest = num;
        }
        if (num < smallest) {
            smallest = num;
        }

        printf("Largest so far == %d. Smallest so far == %d\n", largest, smallest);
        printf("Enter number:");
        scanf("%d", &num);
    }

    printf("Bye!\n");
}