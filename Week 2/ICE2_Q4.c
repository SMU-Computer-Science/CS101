#include <stdio.h>

int main(void) {
    double wt;
    printf("Enter weight(kg):");
    scanf("%lf", &wt);

    double ht;
    printf("Enter height(m):");
    scanf("%lf", &ht);

    double bmi = wt / (ht * ht);
    printf("BMI is %lf\n", bmi);

    printf("You are consider ");
    if (bmi < 18.5) {
        printf("underweight.\n");
    } else if (bmi >= 18.5 && bmi < 25) {
        printf("normal.\n");
    } else if (bmi >= 25 && bmi < 30) {
        printf("overweight.\n");
    } else {
        printf("obese.\n");
    }
}