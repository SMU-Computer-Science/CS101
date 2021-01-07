//PremiumCalculator

#include <stdio.h>

int premium(age, gender) {
    if (age < 25) {
        switch (gender) {
        case 'm':
        case 'M':
            printf("Your premium is $20.50\n");
            break;
        case 'f':
        case 'F':
            printf("Your premium is $30.60\n");
        default:
            break;
        }
    } else if ( age <= 25 && age < 30) {
        switch (gender) {
        case 'm':
        case 'M':
            printf("Your premium is $30.40\n");
            break;
        case 'f':
        case 'F':
            printf("Your premium is $50.70\n");
        default:
            break;
        }
    } else if ( age <= 30 && age < 65) {
        switch (gender) {
        case 'm':
        case 'M':
            printf("Your premium is $60.70\n");
            break;
        case 'f':
        case 'F':
            printf("Your premium is $99.80\n");
        default:
            break;
        }
    } else {
        switch (gender) {
        case 'm':
        case 'M':
            printf("Your premium is $70.70\n");
            break;
        case 'f':
        case 'F':
            printf("Your premium is $120.30\n");
        default:
            break;
        }
    }
    return 0;
}

int main(void) {
    char gender;
    printf("Enter your gender (M or F):");
    scanf("%c", &gender);
    
    int age;
    printf("Enter your age:");
    scanf("%d", &age);

    premium(age, gender);
}