#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void sieve(int num, int **result, int *n) {

    int j = 0;
    int *arr = calloc(num, sizeof(int));
    // int prime[num];
    int *prime = calloc(num, sizeof(int));

    for (int i = 2; i <= num; i++) {
        arr[j] = i;
        j++;
        // printf("arr[j]: %d\n", arr[j]);
    }


    for (int i = 2; i * i < num; i++) {
        // printf("im in ");
        if (arr[i] != -1) {
            for (int a = i * i; a < num; a += i) {
                printf("a = %d, num = %d\n", a, num);
                arr[a] = -1;
            }
        }
    }

    int k = 0;
    for (int i = 2; i < num; i++) {
        
        if (arr[i] != -1) {
            prime[k] = i;
            k++;
        }
    }

    free(arr);
    
    // for (int i = 0; i < k; i++) {
    //     printf("%d ", prime[i]);
    // }
    
    *n = k;
    *result = prime;
    

}

int main(void) {
    {
        int *result = NULL;
        int n = 0;
        sieve(30, &result, &n);
        printf("Expected:2 3 5 7 11 13 17 19 23 29\n");
        printf("Actual  :");
        for (int i = 0; i < n; i++) {
            printf("%d ", result[i]);
        }
        printf("\n");
        free(result);
    }
}


