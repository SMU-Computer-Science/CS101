#include <stdio.h>

int main(void) {
    int yr;
    printf("Enter year:");
    scanf("%d", &yr);

    int yr_4 = yr % 4;
    int yr_100 = yr % 100;
    int yr_400 = yr % 400;
    if ((yr_4 == 0 && yr_100 != 0) || yr_400 == 0) {
        printf("%d is a leap year\n", yr);
    } else {
        printf("%d is not a leap year\n", yr);
    }
}