#include <stdio.h>

int main(void) {
    int n;
    printf("Enter num:");
    scanf("%d", &n);

    int n_even = n % 2;
    if (n_even == 0) {
        printf("%d is even\n", n);
    } else {
        printf("%d is odd\n", n);
    }
}