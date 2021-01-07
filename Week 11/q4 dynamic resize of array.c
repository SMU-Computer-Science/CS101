#include <stdio.h>
#include <stdlib.h>




void print_array(int n, int arr[n]) {
    if (n == 0) {
        printf("><\n");
        return;
    }
    printf(">");
    for (int i = 0; i < n - 1; i++) {
        printf("%d ", arr[i]);
    }
    printf("%d<\n", arr[n - 1]);
}

// int intersection_of_2(int s1, int *n1, int s2, int* n2, int** point){
//     int count = 0;
//     int *new = malloc(sizeof(int));
//     for(int i  = 0; i < s1;i++){   
//         for(int j = 0; j < s2; j++){
//             if(n1[i] == n2[j]){
//                 if(count == 0){                    
//                     new[0] = n1[i];
//                 } else{
//                     new = realloc(new, count + 1);
//                     new[count] = n1[i];
//                 }
//                 count++;
//                 break;
//             }
//         }

//     }
//     *point = new;
//     return count; 
// }


int intersection_of_2(int size1, int arr1[], int size2, int arr2[], int **result) {
    int *to_return = malloc(sizeof(int) * (size1 + size2));
    int *copy = to_return;

    int pos1 = 0, pos2 = 0;
    while (pos1 < size1 && pos2 < size2) {
        if (arr1[pos1] < arr2[pos2]) {
            pos1++;
        } else if (arr2[pos2] < arr1[pos1]) {
            pos2++;
        } else { /* both values matches */
            *to_return++ = arr1[pos1];
            pos1++;
            pos2++;
        }
    }
    int len = to_return - copy;
    to_return = realloc(copy, len * sizeof(int));
    //printf("%d %d %d\n", to_return[0], to_return[1], len);

    *result = to_return;
    return len;
}

int main(void) {
    {
        int arr1[] = {1, 3, 5};
        int arr2[] = {3, 4, 5, 6};
        int *result;
        int n = intersection_of_2(sizeof(arr1) / sizeof(int), arr1, sizeof(arr2) / sizeof(int), arr2, &result);
        printf("Test 1\n");
        printf("Expected:>3 5<\n");
        printf("Actual  :");
        print_array(n, result);
        printf("\n");
        free(result);
    }

    {
        int arr1[] = {1, 3, 5};
        int arr2[] = {4, 6, 9, 10};
        int *result;
        int n = intersection_of_2(sizeof(arr1) / sizeof(int), arr1, sizeof(arr2) / sizeof(int), arr2, &result);
        printf("Test 2\n");
        printf("Expected:><\n");
        printf("Actual  :");
        print_array(n, result);
        printf("\n");
        free(result);
    }

    {
        int arr1[] = {1, 3, 5, 9, 11};
        int arr2[] = {4, 6, 9, 10};
        int *result;
        int n = intersection_of_2(sizeof(arr1) / sizeof(int), arr1, sizeof(arr2) / sizeof(int), arr2, &result);
        printf("Test 3\n");
        printf("Expected:>9<\n");
        printf("Actual  :");
        print_array(n, result);
        printf("\n");
        free(result);
    }

    {
        //
        int arr1[] = {1, 3, 5, 5};
        int arr2[] = {3, 5, 5, 9};
        int *result;
        int n = intersection_of_2(sizeof(arr1) / sizeof(int), arr1, sizeof(arr2) / sizeof(int), arr2, &result);
        printf("Test 4\n");
        printf("Expected:>3 5 5<\n");
        printf("Actual  :");
        print_array(n, result);
        printf("\n");
        free(result);
    }
}