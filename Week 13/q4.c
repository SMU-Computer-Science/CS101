#include <stdio.h>
#include <stdlib.h>


void print_array(int *arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        printf("%d ", arr[i]);
    }
    printf("%d\n", arr[n - 1]);
}



// void combine(int * arr1, int s1, int *arr2, int s2, int **result){
//     int *arr = malloc(sizeof(int) * (s1 + s2));

//     int j = 0;
//     int k = 0;

//     for(int i = 0; i < s1+ s2; i++){
//         if(j != s1 && k != s2){
//             if(arr1[j] > arr2[k]){
//                 arr[i] = arr2[k];
//                 k++;
//             } else{
//                 arr[i] = arr1[j];
//                 j++;
//             }
//         } else if (j == s1){
//             arr[i] = arr2[k];
//             k++;
//         } else{
//             arr[i] = arr1[j];
//             j++;
//         }  
//     }

//     *result = arr;

// }

void combine(int * arr1, int s1, int *arr2, int s2, int **result){
    *result = malloc(sizeof(int) * (s1 + s2));

    int j = 0;
    int k = 0;

    for(int i = 0; i < s1+ s2; i++){
        if(j != s1 && k != s2){
            if(result[j] > arr2[k]){
                arr[i] = arr2[k];
                k++;
            } else{
                arr[i] = arr1[j];
                j++;
            }
        } else if (j == s1){
            arr[i] = arr2[k];
            k++;
        } else{
            arr[i] = arr1[j];
            j++;
        }  
    }

    *result = arr;

}


int main(void) {
    int num = 1;
    {
        int n1 = 3;
        int n2 = 3;
        int arr1[] = {1, 3, 5};
        int arr2[] = {2, 4, 6};
        int *result;
        combine(arr1, n1, arr2, n2, &result);
        printf("Test %d\n", num++);
        printf("Expected:1 2 3 4 5 6\n");
        printf("Actual  :");
        print_array(result, n1 + n2);
        free(result);
        printf("\n");
    }

    {
        int n1 = 4;
        int n2 = 3;
        int arr1[] = {1, 2, 5, 9};
        int arr2[] = {11, 20, 24};
        int *result;
        combine(arr1, n1, arr2, n2, &result);
        printf("Test %d\n", num++);
        printf("Expected:1 2 5 9 11 20 24\n");
        printf("Actual  :");
        print_array(result, n1 + n2);
        free(result);
        printf("\n");
    }

    {
        int n1 = 3;
        int n2 = 5;
        int arr1[] = {2, 5, 9};
        int arr2[] = {4, 6, 24, 51, 55};
        int *result;
        combine(arr1, n1, arr2, n2, &result);
        printf("Test %d\n", num++);
        printf("Expected:2 4 5 6 9 24 51 55\n");
        printf("Actual  :");
        print_array(result, n1 + n2);
        free(result);
        printf("\n");
    }
}