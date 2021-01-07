#include <stdio.h>
#include <math.h>

int main(void) {
    double amt;
    printf("Enter amount: ");
    scanf("%lf", &amt);

    int amt_cents;
    amt_cents = lround(amt * 100);

    int dollar_1;
    dollar_1 = amt_cents / 100;
    amt_cents = amt_cents - (dollar_1 * 100);

    int cents_50;
    cents_50 = amt_cents / 50;
    amt_cents = amt_cents - (cents_50 * 50);

    int cents_20;
    cents_20 = amt_cents / 20;
    amt_cents = amt_cents - (cents_20 * 20);

    int cents_10;
    cents_10 = amt_cents / 10;
    amt_cents = amt_cents - (cents_10 * 10);

    int cents_05;
    cents_05 = amt_cents / 5;
    amt_cents = amt_cents - (cents_05 * 5);

    int cents_01;
    cents_01 = amt_cents / 1;
    amt_cents = amt_cents - (cents_01 * 1);

    if (dollar_1 != 0) {
        printf("Number of 1$: %d\n", dollar_1);
    }
    if (cents_50 != 0) {
        printf("Number of 50c: %d\n", cents_50);
    }
    if (cents_20 != 0) {
        printf("Number of 20c: %d\n", cents_20);
    }
    if (cents_10 != 0) {
        printf("Number of 10c: %d\n", cents_10);
    }
    if (cents_05 != 0) {
        printf("Number of 5c: %d\n", cents_05);
    }
    if (cents_01 != 0) {
        printf("Number of 1c: %d\n", cents_01);
    }
}