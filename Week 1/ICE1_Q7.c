//Solutions by Jayden

#include <stdio.h>
#include <math.h>

int main(void) {
    double wt;
    printf("Enter weight(kg):");
    scanf("%lf", &wt);

    double ht;
    printf("Enter height(m):");
    scanf("%lf", &ht);

    double bmi;
    bmi = wt / pow(ht, 2);
    printf("BMI is %lf\n", bmi);
}
