#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int total(char *string) {
    int sum = 0;

    while (*string != '\0') {
        int count = 0;
        char *temp = string;
        while (*temp != ' ' && *temp != '\0') {
            count++;
            temp++;
        }

        char ptr[count + 1];
        temp = string;
        int k = 0;
        while (*temp != ' ' && *temp != '\0') {
            ptr[k] = *temp;
            k++;
            temp++;
        }
        ptr[k] = '\0';

        int value;
        sscanf(ptr, "%d", &value);
        sum += value;
        if (*temp == '\0') {
            break;
        }
        string += count + 1;
    }
    return sum;
}

// int total(char array[]) {
//     int len = strlen(array);
//     // printf("len: %d\n", len);
//     int num = 0;
//     int count = 0;
//     int num_count = 1;
//     int z = 0;
//     int sum = 0;
//     int total = 0;

//     for (int i = 0; i < len; i++) {
//         sum = 0;
//         // printf("i: %d\n", i);
//         if (array[i] == ' ') {
//             count = 0;
//             num_count++;
//             // printf("num_count: %d\n", num_count);
//         }

//         if (array[i] != ' ') {
//             num = array[i] - '0';
//             // printf("num: %d\n", num);
//             if (isdigit(array[i])) {
//                 count++;
//                 // printf("count: %d\n", count);
//             }
//             z = count;
//             printf("[%d]", z);
//             sum = num * pow(10, z - 1);
//             total += sum;
//             printf("(%d)", total);
//         }
//     }

//     return total;
// }

int main(void) {
    {
        printf("Test 1\n");
        printf("Expected:6\n");
        int result = total("1 2 3");
        printf("Actual  :%d\n", result);
        printf("\n");
    }

    {
        printf("Test 2\n");
        printf("Expected:3\n");
        int result = total("3");
        printf("Actual  :%d\n", result);
        printf("\n");
    }

    {
        printf("Test 3\n");
        printf("Expected:1368\n");
        int result = total("11 123 1234");
        printf("Actual  :%d\n", result);
        printf("\n");
    }
}