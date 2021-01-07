#include <stdio.h>
#include <math.h>

int main(void) {
    int n;
    printf("Enter n:");
    scanf("%d", &n);

    //A
    for (int i = 0; i < n; ++i) {
        char first_line[7] = "--\\|/-";
        printf("%s", first_line);
    }

    printf("\n\n");

    //B
    int second_line = n + 1;
    for (int i = 0; i < n; ++i) {
        second_line -= 1;
        int pow_second_line = pow(second_line, 2);
        printf("%d ", pow_second_line);
    }
    
    printf("\n\n");

    //C
    for (int i = 1; i < n + 1; ++i) {
        printf("%d%d%d ", i, i + 1, i + 2);
    }

    printf("\n\n");

    //D
    char ch_capital = 'A';
    char ch_small = 'a';

    for (int i = 0; i < n; ++i) {
        //ch_capital += 1;
        //ch_small += 1;
        printf("%c%c", ch_capital + i % 26, ch_small + i % 26);
        
    }

    printf("\n\n");

    //E
    int sum = 0;
    for (int i = n; i > 0; --i) {
        printf("%d ", i);
        sum += i;
    }
    printf("(sum: %d)", sum);

    printf("\n\n");

    //F
    int pattern = 0;
    for (int i = 0; i < n; ++i) {
        pattern += (i + 1) * pow(10, i);
        printf("%d\n", pattern);
    }
}