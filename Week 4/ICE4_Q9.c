#include <stdio.h>
#include <math.h>

int main(void) {
    int num;
    printf("Enter num:");
    scanf("%d", &num);

    int remainder;
    int val = 0;
    int n = 0;
    int sum = 0;
    while (num != 0) {
        remainder = num % 2;
        num /= 2;
        val = remainder * pow(10, n);
        n += 1;
        sum += val;
    }
    printf("%d\n", sum);

}