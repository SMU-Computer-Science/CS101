#include <stdio.h>

int main(void) {
    double a;
    printf("Enter side a:");
    scanf("%lf", &a);

    double b;
    printf("Enter side b:");
    scanf("%lf", &b);

    double c;
    printf("Enter side c:");
    scanf("%lf", &c);

    if (a + b > c && b + c > a && a + c > b) {
        printf("It is a valid triangle.\n");
    } else {
        printf("It is an invalid triangle.\n");
    }
}