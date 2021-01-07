#include <stdio.h>

int print_calendar(int num_days, int first_sun) {
    printf("Su  Mo  Tu  We  Th  Fr  Sa\n");
    int index = 0;

    if (first_sun == 7) {
        for (int j = 1; j < 7; j++) {
            printf("   %d", j);
        }
        printf("\n");
    }
    for (int k = first_sun; k <= num_days; k++) {
        printf("%d   ", k);
        index++;
        if (index == 7) {
            printf("\n");
            index++;
            index = index % 7;
        }
    }
    printf(" \n");
    return 0;
}

int main(void) {
    print_calendar(30, 2);
    printf("\n");
    print_calendar(31, 1);
    printf("\n");
    print_calendar(31, 7);
}