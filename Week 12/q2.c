#include <stdio.h>


void print_array(int rows, int cols, int matrix[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}


void largest_column_first(int rows, int cols, int arr[][cols]){
    
    int prevsum = 0; 
    int col_num = 0;
    
    
    for(int i = 0; i < rows; i++){
        prevsum += arr[i][0];
    }
    
    for(int i = 0; i < cols; i++){
        int sum = 0;
        for(int j = 0; j < rows; j++){
            sum += arr[j][i];
        }
        if(sum > prevsum){
            col_num = i;
            prevsum = sum;
        }
    }

    for(int j = 0; j < rows; j++){
                int temp  = arr[j][0];
                arr[j][0] = arr[j][col_num];
                arr[j][col_num] = temp;
    }
}

int main(void) {
    int tc_num = 1;
    {
        int arr[][3] = {
            {5, 6, 9}, 
            {9, 1, 8}};
        int rows = 2;
        int cols = 3;
        largest_column_first(rows, cols, arr);
        printf("Test Case %d\n", tc_num++);    
        printf("Expected:\n");
        printf("9 6 5\n");
        printf("8 1 9\n");
        printf("Actual  :\n");
        print_array(rows, cols, arr);
        printf("\n");
    }


    {
        int arr[][4] = {
            {3, 6, 4, 9}, 
            {7, 1, 5, 9},
            {2, 1, 5, 9},
            {4, 1, 8, 9}};
        int rows = 4;
        int cols = 4;
        largest_column_first(rows, cols, arr);
        printf("Test Case %d\n", tc_num++);    
        printf("Expected:\n");
        printf("9 6 4 3\n");
        printf("9 1 5 7\n");
        printf("9 1 5 2\n");
        printf("9 1 8 4\n");
        printf("Actual  :\n");
        print_array(rows, cols, arr);
        printf("\n");
    }

    {
        int arr[][1] = {
            {3}, 
            {7},
            {2},
            {9}};
        int rows = 4;
        int cols = 1;
        largest_column_first(rows, cols, arr);
        printf("Test Case %d\n", tc_num++);    
        printf("Expected:\n");
        printf("3\n");
        printf("7\n");
        printf("2\n");
        printf("4\n");
        printf("Actual  :\n");
        print_array(rows, cols, arr);
        printf("\n");
    }
}