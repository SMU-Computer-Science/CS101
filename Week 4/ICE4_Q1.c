#include <stdio.h>

int main(void) {
    int n;
    printf("Enter n:");
    scanf("%d", &n);

    int i = 7;
    int long sum = 0;
    while (i < n) {
        sum += i;
        i += 7;
    }

    printf("%ld\n", sum);
}