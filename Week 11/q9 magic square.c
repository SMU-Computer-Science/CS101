#include <stdbool.h>
#include <stdio.h>

bool less9(int n){
    if(n >= 0 && n <= 9){
        return true;
    }
    return false;
}

bool is_all_ones(int array[], int len) {
    for (int i = 0; i < len; i++) {
        if (array[i] != 1) {
            return false;
        }
    }

    return true;
}

bool is_magic_square(int cols, int values[][cols]){
    int freq[9] = {0};
    int left_diagonal_sum = 0;
    int right_diagonal_sum = 0;
    for(int i = 0; i < cols; i++){
        int sum1 = 0;
        int sum2 = 0;
        for(int j = 0; j < cols; j++){
            if(!less9(values[i][j])){
                return false;
            }
            freq[values[i][j] - 1]++;
            sum1 += values[i][j];
            sum2 += values[j][i];            
        }
        if(sum1 != 15 || sum2 != 15){
            return false;
        }
        left_diagonal_sum += values[i][i];
        right_diagonal_sum += values[i][cols - i - 1];
    }
    
    if(!is_all_ones(freq, 9)){
        return false;
    }

    return left_diagonal_sum == 15 && right_diagonal_sum == 15;

    // int sum1 = values[0][0] + values[1][1] + values[2][2];
    // int sum2 = values[0][2] + values[1][1] + values[2][0];
    // if(sum1 != 15 || sum2 != 15){
    //         return false;
    // } else{
    //     return true;
    // }
}

int main(void) {
    {
        int values[][3] = {{4, 3, 8}, {9, 5, 1}, {2, 7, 6}};
        printf("Test 1:%s\n", is_magic_square(3, values) ? "Pass" : "Fail");
        printf("\n");
    }
    {
        int values[][3] = {{4, 9, 2}, {3, 5, 7}, {8, 1, 6}};
        printf("Test 2:%s\n", is_magic_square(3, values) ? "Pass" : "Fail");
        printf("\n");
    }
    {
        int values[][3] = {{6, 1, 8}, {7, 5, 3}, {2, 9, 4}};
        printf("Test 3:%s\n", is_magic_square(3, values) ? "Pass" : "Fail");
        printf("\n");
    }
    {
        int values[][3] = {{5, 5, 5}, {5, 5, 5}, {5, 5, 5}};
        printf("Test 4:%s\n", is_magic_square(3, values) ? "Fail" : "Pass");
        printf("\n");
    }
    {
        int values[][3] = {{2, 6, 7}, {9, 5, 1}, {4, 3, 8}};
        printf("Test 5:%s\n", is_magic_square(3, values) ? "Fail" : "Pass");
        printf("\n");
    }
    {
        int values[][3] = {{10, 4, 1}, {1, 5, 9}, {4, 6, 5}};
        printf("Test 6:%s\n", is_magic_square(3, values) ? "Fail" : "Pass");
        printf("\n");
    }
}
