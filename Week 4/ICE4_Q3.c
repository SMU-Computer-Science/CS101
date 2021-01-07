#include <stdio.h>

int main(void) {
    int n1;
    int n2;
    int sum = 0;
    do {
        printf("Enter n1>");
        scanf("%d", &n1);

        printf("Enter n2>");
        scanf("%d", &n2);

        sum = n1 + n2;
        if (sum % 3 != 0) {
            printf("Invalid!\n");
        }
    } while (sum % 3 != 0);

    if (n1 < n2) {
        for (int i = n1; i <= n2; i++) {
            printf("%d ", i);
        }
    } else {
        for (int i = n2; i <= n1; i++) {
            printf("%d ", i);
        }
    }
    printf("\n");
}