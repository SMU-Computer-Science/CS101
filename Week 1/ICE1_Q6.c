//Solutions by Jayden

#include <stdio.h>

int main(void) {
    int males;
    printf("Enter num males:");
    scanf("%d", &males);

    int females;
    printf("Enter num females:");
    scanf("%d", &females);

    double total = males + females;
    double percentage;
    percentage = (females / total) * 100.00;
    printf("Percentage(Females)= %.1lf%%\n", percentage);
}
