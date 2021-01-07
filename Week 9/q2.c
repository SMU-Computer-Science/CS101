#include <stdio.h>

void print_largest_two(int *array,int size){
    int largest01 = 0;
    int largest02 = 0;
    for (int i = 0 ; i < size; i++){
        if(array[i] > array[i+1]){
            largest01 = array[i];
            }
        if(array[i+1] > array[i]){
            largest01 = array[i+1];
        
        }
    }
    printf("%d",largest01);
}
int main(void) {
    {
        int numbers[] = {13, 5, 6, 11};
        printf("Test 1\n");
        printf("Expected:#1 = 13, #2 = 11\n");
        printf("Actual  :");
        print_largest_two(numbers, sizeof(numbers) / sizeof(int));
        printf("\n");
    }

    {
        int numbers[] = {13, 13, 6, 11};
        printf("Test 2\n");
        printf("Expected:#1 = 13, #2 = 13\n");
        printf("Actual  :");
        print_largest_two(numbers, sizeof(numbers) / sizeof(int));
        printf("\n");
    }

    {
        int numbers[] = {13, 11, 1, 8, 2, 3, 5, 6, 6, 13};
        printf("Test 3\n");
        printf("Expected:#1 = 13, #2 = 13\n");
        printf("Actual  :");
        print_largest_two(numbers, sizeof(numbers) / sizeof(int));
        printf("\n");
    }

    {
        int numbers[] = {13, 11, 1, 8, 2, 3, 5, 6, 6, 17};
        printf("Test 4\n");
        printf("Expected:#1 = 17, #2 = 13\n");
        printf("Actual  :");
        print_largest_two(numbers, sizeof(numbers) / sizeof(int));
        printf("\n");
    }

    {
        int numbers[] = {21, 11, 1, 8, 2, 3, 5, 6, 6, 17};
        printf("Test 1\n");
        printf("Expected:#1 = 21, #2 = 17\n");
        printf("Actual  :");
        print_largest_two(numbers, sizeof(numbers) / sizeof(int));
        printf("\n");
    }

    {
        int numbers[] = {1, 2};
        printf("Test 1\n");
        printf("Expected:#1 = 2, #2 = 1\n");
        printf("Actual  :");
        print_largest_two(numbers, sizeof(numbers) / sizeof(int));
        printf("\n");
    }

    {
        int numbers[] = {1};
        printf("Test 1\n");
        printf("Expected:#1 = 1\n");
        printf("Actual  :");
        print_largest_two(numbers, sizeof(numbers) / sizeof(int));
        printf("\n");
    }
}