#include <stdio.h>

int main(void) {
    double income;
    printf("Enter personal income: ");
    scanf("%lf", &income);
    if (income <= 30000) {
        double income_base = 20000;
        double income_supp = income - income_base;
        double income_tax = income_supp * 0.02;
        if (income > 20000) {
        double gross_tax = 200;
        double tax_payable = income_tax + gross_tax;
        printf("Tax payable: %lf\n", tax_payable);
        } else {
            double tax_payable = 0;
            printf("Tax payable: %lf\n", tax_payable);
        }
    } else if (income <= 40000) {
        double income_base = 30000;
        double income_supp = income - income_base;
        double income_tax = income_supp * 0.035;
        if (income > 30000) {
        double gross_tax = 350;
        double tax_payable = income_tax + gross_tax;
        printf("Tax payable: %lf\n", tax_payable);
        } else {
            double tax_payable = 200;
            printf("Tax payable: %lf\n", tax_payable);
        }
    } else if (income <= 80000) {
        double income_base = 40000;
        double income_supp = income - income_base;
        double income_tax = income_supp * 0.07;
        if (income > 40000) {
        double gross_tax = 2800;
        double tax_payable = income_tax + gross_tax;
        printf("Tax payable: %lf\n", tax_payable);
        } else {
            double tax_payable = 550;
            printf("Tax payable: %lf\n", tax_payable);
        }
    }
}