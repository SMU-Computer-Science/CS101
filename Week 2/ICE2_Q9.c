// PayCalculator!
#include <stdio.h>

int main(void) {
    double base = 2000;
    double mth_sale;
    printf("Enter the amount of monthly sales($):");
    scanf("%lf", &mth_sale);

    double mth_com;
    double rate;
    if (mth_sale < 10000) {
        rate = 0.05;
        mth_com = mth_sale * rate;
    } else if (mth_sale >= 10000 && mth_sale < 15000) {
        rate = 0.10;
        mth_com = mth_sale * rate;
    } else if (mth_sale >= 15000 && mth_sale < 18000) {
        rate = 0.15;
        mth_com = mth_sale * rate;
    } else {
        rate = 0.18;
        mth_com = mth_sale * rate;
    }

    double mth_pay = base + mth_com;
    int rate_percent = rate * 100;
    printf("Commission rate for the monthly sale of $%.1lf is %d%%\nThe monthly pay for the salesperson is $%.2lf\n", mth_sale, rate_percent, mth_pay);
}