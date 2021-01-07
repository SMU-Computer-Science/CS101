#include <stdio.h>

int main(void) {
    int n;
    printf("Enter n:");
    scanf("%d", &n);

    int term_1 = 0;
    int term_2 = 1;
    for (int i = 0; i < n; i++) {
        printf("%d ", term_1);
        int next_term = term_1 + term_2;
        term_1 = term_2;
        term_2 = next_term;
    }
    
    printf("\n");
}