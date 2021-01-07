#include <stdio.h>

int main(void) {
    int val;
    printf("Enter integer:");
    scanf("%d", &val);

    while (val != -1) {
        int reverse_val = 0;
        int temp = val;
        while (temp != 0) {
            int remainder = temp % 10;
            reverse_val = reverse_val * 10 + remainder;
            temp /= 10;
        }

        if (reverse_val == val) {
            printf("%d is a palindrome.\n", val);
        } else {
            printf("%d is not a palindrome.\n", val);
        }

        printf("Enter integer:");
        scanf("%d", &val);
    }

    printf("Bye bye!\n");
}