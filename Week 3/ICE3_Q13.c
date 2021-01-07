#include <stdio.h>

int main(void) {
    int height;
    printf("Enter the height of the tree, greater than 9:");
    scanf("%d", &height);

    if (height < 10) {
        printf("Enter a number greater than 9");
    } else {
        for (int i = 0; i < height; i++) {
            if (i >= height - 5) {
                for (int j = 1; j < height - 5; j++) {
                    printf(" ");
                }
                printf("*\n");
            } else {
                for (int j = 1; j <= height - 6 - i; j++) {
                    printf(" ");
                }
                for (int k = 0; k <= 2 * i; k++) {
                    printf("*");
                }
                printf("\n");
            }
        }
    }
}