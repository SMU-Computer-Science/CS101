#include <stdio.h>

void print_array(int len, int *values) {
    for (int i = 0; i < len - 1; i++) {
        printf("%d, ", values[i]);
    }
    printf("%d", values[len-1]);
    printf("\n");
}

void swap( int * a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition (int *arr, int low,int high){
    int pivot = arr[high];
    int i = low;
    for(int j = low; j < high; j++){
        if(arr[j] < pivot){
            swap(&arr[j], &arr[i]);
            i++;
        }
    }
    swap(&arr[high], &arr[i]);
    return i;
}


void quicksort(int *arr, int low, int high){
    if (high > low){
        int p = partition (arr, low, high);
        quicksort(arr, low, p-1);

        quicksort(arr, p + 1, high);
    }
}


int main(void) {
    {
        int arr[] = {3, 7, 8, 5, 2, 1, 9, 5, 4};
        printf("Test 1\n");
        printf("Before:");
        print_array(sizeof(arr) / sizeof(int), arr);
        quicksort(arr, 0, sizeof(arr) / sizeof(int) - 1);
        printf("After :");
        print_array(sizeof(arr) / sizeof(int), arr);
        printf("\n");
    }

    {
        int arr[] = {1, 2, 4};
        printf("Test 1\n");
        printf("Before:");
        print_array(sizeof(arr) / sizeof(int), arr);
        quicksort(arr, 0, sizeof(arr) / sizeof(int) - 1);
        printf("After :");
        print_array(sizeof(arr) / sizeof(int), arr);
        printf("\n");
    }

    {
        int arr[] = {5, 3, 1};
        printf("Test 1\n");
        printf("Before:");
        print_array(sizeof(arr) / sizeof(int), arr);
        quicksort(arr, 0, sizeof(arr) / sizeof(int) - 1);
        printf("After :");
        print_array(sizeof(arr) / sizeof(int), arr);
        printf("\n");
    }

    {
        int arr[] = {5};
        printf("Test 1\n");
        printf("Before:");
        print_array(sizeof(arr) / sizeof(int), arr);
        quicksort(arr, 0, sizeof(arr) / sizeof(int) - 1);
        printf("After :");
        print_array(sizeof(arr) / sizeof(int), arr);
        printf("\n");
    }
}
