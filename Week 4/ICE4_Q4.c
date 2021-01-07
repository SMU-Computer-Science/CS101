#include <stdbool.h>
#include <stdio.h>

int main(void) {
    int num;
    printf("Enter num:");
    scanf(" %d", &num);

    if (num == 0) {
        printf("1\n");
        return 0;
    } else {
        int count = 0;
        while (num != 0) {
            num /= 10;
            count += 1;
        }
        printf("%d\n", count);
    }
}