//Solutions by Jayden

#include <stdio.h>

int main(void) {
    double mah;
    printf("Enter capacity(mAh):");
    scanf("%lf", &mah);

    double v;
    printf("Enter voltage(V):");
    scanf("%lf", &v);

    double rated_power;
    rated_power = (mah / 1000) * v;
    printf("rated power: %d Wh\n", (int)rated_power);
}
