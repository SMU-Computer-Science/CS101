#include <stdio.h>

int main(void) {
    int start;
    printf("Enter start:");
    scanf("%d", &start);

    int end;
    printf("Enter end:");
    scanf("%d", &end);

    for (int i = start; i <= end; i++) {
        int j = 2;
        for (j = 2; j <= end; j++) {
            if (i % j == 0) {
                break;
            }
        }
        if (i == j) {
            printf("%d ", i);
        }
    }

    printf("\n");
}
