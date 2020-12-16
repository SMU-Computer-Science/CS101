//Solutions by Jayden

#include <stdio.h>

int main(void) {
    int num;
    printf("Enter number:");
    scanf("%d", &num);

    int digit_5 = num % 10;
    num /= 10;
    int digit_4 = num % 10;
    num /= 10; 
    int digit_3 = num % 10;
    num /= 10;
    int digit_2 = num % 10;
    num /= 10; 
    int digit_1 = num % 10;
    num /= 10;
    int sum = digit_1 + digit_2 + digit_3 + digit_4 + digit_5;

    printf("%d + %d + %d + %d + %d = %d\n", digit_1, digit_2, digit_3, digit_4, digit_5, sum);
}
