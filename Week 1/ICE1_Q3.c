//Solutions by Jayden

#include <stdio.h>
#include <math.h>

int main(void) {
    printf("N \t N^2 \t N^3\n");
    for (int i = 0; i <= 10; i++) {
        printf("%d \t %d \t %d\n", i, (int)pow(i, 2), (int)pow(i, 3));
    }
}
