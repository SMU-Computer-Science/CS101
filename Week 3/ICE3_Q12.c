#include <stdio.h>

int main(void) {
    int rows;
    printf("rows>");
    scanf("%d", &rows);

    int cols;
    printf("cols>");
    scanf("%d", &cols);

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            if (i == 1 || i == rows || j == 1 || j == cols) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}