#include <stdio.h>

// int binary_search(int size, int* arr, int target){
    
//     int high = size;
//     int low = 0;
//     int mid = low + (high -low)/2;
    
//     int count = 0; 

//     while(target != arr[mid]){        
//         if(target > arr[mid]){
//             low = mid; 
//         }else{
//             high = mid;
//         }
//         mid = low + (high -low)/2;
//         count++;
//         if(count > size){
//             return -1;
//         }
        
//     }

//     return mid;
// }

int binary_search(int n, int sorted_arr[], int element) {
    int low = 0;
    int high = n;
    int middle;
    while (low <= high) {
        middle = low + (high - low) / 2;
        if (element > sorted_arr[middle]) {
            low = middle + 1;
        } else if (element < sorted_arr[middle]) {
            high = middle - 1;
        } else {
            return middle;
        }
    }
    return -1;
}

int main(void) {
    int tc_num = 1;
    {
        int arr[] = {2, 3, 7, 11, 15, 33, 35, 67, 78, 99};
        printf("Test Case %d\n", tc_num++);
        printf("Expected:7\n");
        int result = binary_search(sizeof(arr) / sizeof(int), arr, 67);
        printf("Actual  :%d\n", result);
        printf("\n");
    }

    {
        int arr[] = {2, 3, 7, 11, 15, 33, 35, 67, 78, 99};
        printf("Test Case %d\n", tc_num++);
        printf("Expected:9\n");
        int result = binary_search(sizeof(arr) / sizeof(int), arr, 99);
        printf("Actual  :%d\n", result);
        printf("\n");
    }

    {
        int arr[] = {2, 3, 7, 11, 15, 33, 35, 67, 78, 99};
        printf("Test Case %d\n", tc_num++);
        printf("Expected:0\n");
        int result = binary_search(sizeof(arr) / sizeof(int), arr, 2);
        printf("Actual  :%d\n", result);
        printf("\n");
    }

    {
        int arr[] = {2, 3, 7, 11, 15, 33, 35, 67, 78, 99};
        printf("Test Case %d\n", tc_num++);
        printf("Expected:-1\n");
        int result = binary_search(sizeof(arr) / sizeof(int), arr, 5);
        printf("Actual  :%d\n", result);
        printf("\n");
    }
}