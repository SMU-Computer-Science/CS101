#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



void sieve (int cap, int**result, int *n){
    int *list = malloc(sizeof(int) * (cap - 1));
    
    list[0] = 2;

    for(int i  = 1; i < cap -1; i++){
        list[i] = list[i-1] + 1;
    }

    
    int i = 0;
    int p = 0; 
    while(p * p < cap){
        
        while(list[i] == 0){
        i++;
        }
        p = list[i];

        for(int j = 2; p * j <= cap; j++){
            for(int k = 0; k < cap-1; k++){
                if(list[k] == p * j){
                    list[k] = 0;
                    break;
                }
            }
        }
        i++;
    }

    int count = 0;
    for(int i  = 0; i < cap - 1; i++){
        if(list[i] != 0){
            count++;
        }
    }

    *n = count;
    int *new = malloc(sizeof(int) * count);

    int j = 0;
    for(int a  = 0; a < cap - 1; a++){
        if(list[a] != 0){
            new[j] = list[a];
            j++;
        }
    }
    free(list);

    *result = new;



}


void sieve(int n, int **result, int *result_size) {
    bool primes[n + 2];

    // initialize all values to true
    memset(primes, true, sizeof(primes));

    for (int i = 2; i <= n; i++) {
        if (primes[i]) {
            for (int j = 2 * i; j <= n; j += i) {
                primes[j] = false;
            }
        }
    }
    int count = 0;
    for (int i = 2; i <= n; i++) {
        if (primes[i]) {
            count++;
        }
    }
    *result_size = count;
    int *to_return = malloc(count * sizeof(int));
    int pos = 0;
    for (int i = 2; i <= n; i++) {
        if (primes[i]) {
            to_return[pos++] = i;
        }
    }
    *result = to_return;

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