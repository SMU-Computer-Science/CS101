#include <stdio.h>
//idk how to loop this process and exclude the largest number without hardcoding
int selection_sort(int *arr, int size) {
    int largestsofar = arr[0];
    int smallestsofar = arr[0];
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] < arr[i + 1]) {
            int larger = arr[i + 1];
            if (larger > largestsofar) {
                largestsofar = larger;
            }
        }
        if (arr[i] > arr[i + 1]) {
            int smaller = arr[i + 1];
            if (smaller < smallestsofar) {
                smallestsofar = smaller;
            }
        }
    }
    //find their indexes
    int indexofsmal = 0;
    int indexofbig = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == smallestsofar) {
            indexofsmal = i;
        }
        if (arr[i] == largestsofar) {
            indexofbig = i;
        }
    }
    //swap indexes
    int temp = 0;
    temp = arr[indexofsmal];
    arr[indexofsmal] = arr[indexofbig];
    arr[indexofbig] = temp;
    return *arr;
}

int main(void) {
    int tc_num = 0;
    {
        int arr[] = {6, 1, 5, 3, 7, 9};
        int n = sizeof(arr) / sizeof(int);
        printf("Test %d\n", ++tc_num);
        printf("Expected:1 3 5 6 7 9\n");
        selection_sort(arr, n);
        printf("Actual  :");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n\n");
    }

    {
        int arr[] = {7, 7, 6, 1, 5, 3, 31, 7, 9, 11};
        int n = sizeof(arr) / sizeof(int);
        printf("Test %d\n", ++tc_num);
        printf("Expected:1 3 5 6 7 7 7 9 11 31\n");
        selection_sort(arr, n);
        printf("Actual  :");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n\n");
    }

    {
        int arr[] = {7};
        int n = sizeof(arr) / sizeof(int);
        printf("Test %d\n", ++tc_num);
        printf("Expected:7\n");
        selection_sort(arr, n);
        printf("Actual  :");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n\n");
    }

    {
        int arr[] = {7, 2};
        int n = sizeof(arr) / sizeof(int);
        printf("Test %d\n", ++tc_num);
        printf("Expected:2 7\n");
        selection_sort(arr, n);
        printf("Actual  :");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n\n");
    }
}