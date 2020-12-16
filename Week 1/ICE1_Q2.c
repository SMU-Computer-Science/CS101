#Solutions by Jayden

#include <stdio.h>

int main(void) {
    int n1;
    printf("Enter n1:");
    scanf(" %d", &n1);

    int n2;
    printf("Enter n2:");
    scanf(" %d", &n2);

    int sum = n1 + n2;
    int product = n1 * n2;
    int quotient = n1 / n2;
    printf("%d + %d = %d\n", n1, n2, sum);
    printf("%d * %d = %d\n", n1, n2, product);
    printf("%d / %d = %d\n", n1, n2, quotient);
}
