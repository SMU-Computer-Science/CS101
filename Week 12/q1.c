#include <stdio.h>
#include <stdlib.h>


// void print_array(double arr[], int n) {
//     for (int i = 0; i < n; i++) {
//         printf("%.1f ", arr[i]);
//     }
//     printf("\n");
// }

int count_high_temperatures(double *arr, int size){
    int count = 0;

    for (int i = 0; i < size; i++){
        if(arr[i] > 37.5){
            count++;
        }
    }
    return count;
}

int main(void) {
    {
        double inputs[] = {36.9, 37.6, 37.2, 37.1, 38.1};
        int result = count_high_temperatures(inputs, sizeof(inputs) / sizeof(double));
        printf("Test 1\n");
        printf("Expected:2\n");
        printf("Actual  :%d\n", result);
        printf("\n");
    }
    {
        double inputs[] = {37.9, 38.2, 38.8, 37.5, 37.3, 37.0};
        int result = count_high_temperatures(inputs, sizeof(inputs) / sizeof(double));
        printf("Test 2\n");
        printf("Expected:3\n");
        printf("Actual  :%d\n", result);
        printf("\n");
    }
}

// int count_high_temperatures(double **ptr, double *arr, int size){
//     int count = 0;

//     for (int i = 0; i < size; i++){
//         if(arr[i] > 37.5){
//             count++;
//         }
//     }

//     double *arr2 = malloc(count * sizeof(double));
//     int k = 0;
//     for(int i = 0; i < size; i++){
//         if(arr[i] > 37.5){
//             arr2[k] = arr[i];
//             k++;
//         }
//     }
//     *ptr = arr2;
//     return count;
// }



// int main(void) {
//     {
//         double inputs[] = {36.9, 37.6, 37.2, 37.1, 38.1};
//         double *ptr;
//         int result = count_high_temperatures(&ptr, inputs, sizeof(inputs) / sizeof(double));
//         printf("Test 1\n");
//         printf("Expected:2\n");
//         print_array(ptr, result);
//         free(ptr);
//         printf("\n");
//     }
//     {
//         double inputs[] = {37.9, 38.2, 38.8, 37.5, 37.3, 37.0};
//         double *ptr;
//         int result = count_high_temperatures(&ptr, inputs, sizeof(inputs) / sizeof(double));
//         printf("Test 2\n");
//         printf("Expected:3\n");
//         print_array(ptr, result);
//         free(ptr);
//         printf("\n");
//     }
// }