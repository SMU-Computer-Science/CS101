/*
A
B
i = 0, j = 0
B
C
A
B
C
A
B
i = 2, j = 0
B
C
*/

/*
A
B
i = 0, j = 0
B
B
i = 0, j = 2
C
A
B
B
B
C
A
B
i = 2, j = 0
B
B
i = 2, j = 2
C
*/

#include <stdio.h>

int main(void) {
    for (int i = 0; i < 3; i++) {
        printf("A\n");
        for (int j = 0; j < 3; j++) {
            printf("B\n");
            if (i == 1 || j == 1) {
                continue;
            }
            printf("i: %d, j: %d\n", i, j);
        }
        printf("C\n");
    }
}