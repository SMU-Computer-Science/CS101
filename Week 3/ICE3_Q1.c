#include <stdio.h>
#include <math.h>

int main(void) {
    double p;
    printf("Initial Deposit(P):");
    scanf("%lf", &p);

    double r_percent;
    printf("Annual Interest Rate (in %%, r):");
    scanf("%lf", &r_percent);
    double r = r_percent / 100;

    double n;
    printf("Annual Compound Frequency (1 to 12, n):");
    scanf("%lf", &n);

    double t;
    printf("Num years (t):");
    scanf("%lf", &t);

    double amount;
    double fraction = 1 + r / n;
    double power = n * t;
    amount = p * pow(fraction, power);
    printf("Amount after %.0lf years is %.2lf\n", t, amount);

}
