#include <stdio.h>

int main(void) {
    int mth;
    printf("Enter month as a number:");
    scanf("%d", &mth);

    switch (mth) {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        printf("There are 31 days in this month.\n");
        break;
    case 2:
        printf("There are 28 days in this month.\n");
        break;
    case 4: case 6: case 9: case 11:
        printf("There are 30 days in this month.\n");
    default:
        printf("Please enter a valid value between 1 - 12.\n");
        break;
    }
}