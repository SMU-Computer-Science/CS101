#include <stdio.h>
#include <math.h>

int main(void) {
    int n;
    printf("Enter n:");
    scanf("%d", &n);

    int factorial = 1;
    if (n >= 0) {
        for (int i = 1; i <= n; ++i) {
            factorial *= i;
        }
        printf("%d! = %d\n", n, factorial);
    } else {
        printf("Invalid input.\n");
    }
}