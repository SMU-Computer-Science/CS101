#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_array(int *arr, int n) {
    if (arr == NULL) {
        printf("NULL\n");
        return;
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", *arr++);
    }
    printf("\n");
}

int *get_max_sum_sublist( int *input, int len, int k){

    if(len< k){
        return NULL;
    }

    int sum = 0;
    for(int i = 0; i < k; i++){
        sum += input[i];
    }
    int point = 0;
    for(int i = 0; i<len-k;i++){
        int tempsum = 0;
        for(int j =i; j <i +k;j++){
            tempsum += input[j];
        }
        if(tempsum > sum){
            point = i;
        }
    }
    return &input[point];
}

int main(void) {
    {
        int input[] = {11, 3, 9, 8, 13, 0, 12};
        int k = 4;
        int *result = get_max_sum_sublist(input, sizeof(input) / sizeof(int), k);
        printf("Expected:3 9 8 13\n");
        printf("Actual  :");
        print_array(result, k);
        printf("\n");
    }

    {
        int input[] = {11, 3, 9, 8, 7, 2};
        int k = 3;
        int *result = get_max_sum_sublist(input, sizeof(input) / sizeof(int), k);
        printf("Expected:9 8 7\n");
        printf("Actual  :");
        print_array(result, k);
        printf("\n");
    }
    {
        int input[] = {11, 3};
        int k = 3;
        int *result = get_max_sum_sublist(input, sizeof(input) / sizeof(int), k);
        printf("Expected:NULL\n");
        printf("Actual  :");
        print_array(result, k);
        printf("\n");
    }
}