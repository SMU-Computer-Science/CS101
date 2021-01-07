#include <stdio.h>


void print_array(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void rotate(int *arr, int size, int step){
    
    step  = step % size;

    int temp[step];
    for(int i = 0; i < step; i++){
        temp[i] = arr[i];
    }
    int j = 0;
    for(int i = step; i < size; i++){
        arr[j] = arr[i];
        j++;
    }
    int k = 0;
    for(int i = j; i < size; i++){
        arr[i] = temp[k];
        k++;
    }

}

void rotate(int arr[], int size, int n) {

    for (int i = 0; i < n; i++) {
        int temp = arr[0];
        for (int j = 1; j < size; j++) {
            arr[j - 1] = arr[j];
        }
        arr[size - 1] = temp;
    }
    
}

int main(void) {
    {
        int arr[] = {1, 2, 3, 4, 5};
        rotate(arr, sizeof(arr) / sizeof(int), 2);
        printf("Expected:3 4 5 1 2\n");
        printf("Actual  :");
        print_array(arr, sizeof(arr) / sizeof(int));
        printf("\n");
    }

    {
        int arr[] = {1, 2, 3, 4, 5, 7, 8, 9};
        rotate(arr, sizeof(arr) / sizeof(int), 5);
        printf("Expected:7 8 9 1 2 3 4 5\n");
        printf("Actual  :");
        print_array(arr, sizeof(arr) / sizeof(int));
        printf("\n");
    }

    {
        int arr[] = {1, 2, 3, 4, 5, 7, 8, 9};
        rotate(arr, sizeof(arr) / sizeof(int), 10);
        printf("Expected:3 4 5 7 8 9 1 2\n");
        printf("Actual  :");
        print_array(arr, sizeof(arr) / sizeof(int));
        printf("\n");
    }
}