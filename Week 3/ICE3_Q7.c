#include <stdio.h>

int main(void) {
    int n;
    printf("Enter n:");
    scanf(" %d", &n);

    //A
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    //B
    for (int i = n; i > 0; i--) {
        for (int j = i; j > 0; j--) {
            printf("*");
        }
        printf("\n");
    }

    printf("\n");
    
    //C
    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    
    printf("\n");

    //D
    char ch = 'A';
    for (int i = n - 1; i >= 0; i--) {
        for (int j = i; j > 0; j--) {
            printf(" ");
        }
        printf("%c\n", ch + i);
    }

    printf("\n");

    //E
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j || j == (n - i - 1)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    
}