#include <stdio.h>
#include <stdlib.h>

void print_array(int n, int arr[n]) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void bubble_sort(int values[], int len) {
    while (len > 1) {
        for (int i = 0; i < len - 1; i++) {
            if (values[i] > values[i + 1]) {
                int temp = values[i];
                values[i] = values[i + 1];
                values[i + 1] = temp;
            }
        }
        len--;
    }
}
//no sorting

void union_of_2(int s1, int *n1, int s2, int *n2, int **point) {
    int *comb = malloc(sizeof(int) * (s1 + s2));
    int j = 0;
    int k = 0;
    for (int i = 0; i < (s1 + s2); i++) {
        if (j < s1 && k < s2) {
            if (n1[j] > n2[k]) {
                comb[i] = n2[k];
                k++;
            } else {
                comb[i] = n1[j];
                j++;
            }
        } else if (j == s1) {
            comb[i] = n2[k];
            k++;
        } else {
            comb[i] = n1[j];
            j++;
        }
    }
    *point = comb;
}

//with bubblesort

// void union_of_2(int s1, int * n1, int s2, int *n2, int **point){
//     int len = s1 + s2;
//     int *comb = malloc(sizeof(int) * len);
//     for(int i = 0; i < s1; i++){
//         comb[i] = n1[i];
//     }
//     int j = 0;
//     for(int i  = s1; i < len; i++){
//         comb[i] = n2[j];
//         j++;
//     }
//     bubble_sort(comb, len);

//     *point = comb;

// }

int main(void) {
    int tc_num = 1;
    {
        int arr1[] = {1, 3, 5};
        int arr2[] = {2, 4, 6};
        int *result = NULL;
        int n1 = sizeof(arr1) / sizeof(int);
        int n2 = sizeof(arr2) / sizeof(int);
        union_of_2(n1, arr1, n2, arr2, &result);
        printf("Test %d\n", tc_num++);
        printf("Expected:1 2 3 4 5 6\n");
        printf("Actual  :");
        print_array(n1 + n2, result);
        printf("\n");
        free(result);
    }

    {
        int arr1[] = {1, 3, 5, 7};
        int arr2[] = {2, 4, 6};
        int *result = NULL;
        int n1 = sizeof(arr1) / sizeof(int);
        int n2 = sizeof(arr2) / sizeof(int);
        union_of_2(n1, arr1, n2, arr2, &result);
        printf("Test %d\n", tc_num++);
        printf("Expected:1 2 3 4 5 6 7\n");
        printf("Actual  :");
        print_array(n1 + n2, result);
        printf("\n");
        free(result);
    }

    {
        int arr1[] = {1, 3, 5};
        int arr2[] = {2, 4, 6, 8};
        int *result = NULL;
        int n1 = sizeof(arr1) / sizeof(int);
        int n2 = sizeof(arr2) / sizeof(int);
        union_of_2(n1, arr1, n2, arr2, &result);
        printf("Test %d\n", tc_num++);
        printf("Expected:1 2 3 4 5 6 8\n");
        printf("Actual  :");
        print_array(n1 + n2, result);
        printf("\n");
        free(result);
    }

    {
        int arr1[] = {1, 3, 5};
        int arr2[] = {7, 9};
        int *result = NULL;
        int n1 = sizeof(arr1) / sizeof(int);
        int n2 = sizeof(arr2) / sizeof(int);
        union_of_2(n1, arr1, n2, arr2, &result);
        printf("Test %d\n", tc_num++);
        printf("Expected:1 3 5 7 9\n");
        printf("Actual  :");
        print_array(n1 + n2, result);
        printf("\n");
        free(result);
    }

    {
        int arr1[] = {1, 3, 5, 8, 9};
        int arr2[] = {7, 9, 9};
        int *result = NULL;
        int n1 = sizeof(arr1) / sizeof(int);
        int n2 = sizeof(arr2) / sizeof(int);
        union_of_2(n1, arr1, n2, arr2, &result);
        printf("Test %d\n", tc_num++);
        printf("Expected:1 3 5 7 8 9 9 9\n");
        printf("Actual  :");
        print_array(n1 + n2, result);
        printf("\n");
        free(result);
    }
}