#include <stdbool.h>
#include <stdio.h>
#include <string.h>

// bool is_balanced (char * str){
    
//     int len =  strlen(str);

//     if(len == 0){
//         return true;
//     }

//     char dup[len];
//     int i = 0;
//     while(*str != '\0'){
//         if(*str == '(' || *str == '{' || *str == '['){
//             dup[i] = *str;
//             i++;
//             str++;
//         }else if(i - 1 < 0){
//             return false;
//         }else if(*str == ')' && dup[i-1] == '('){
//             i--;
//             dup[i] = '0';
//             str++; 
//         } else if(*str == '}' && dup[i-1] == '{'){
//             i--;
//             dup[i] = '0';
//             str++;
//         } else if(*str == ']' && dup[i-1] == '['){
//             i--;
//             dup[i] = '0';
//             str++;
//         } else{
//             return false;
//         }
//     }
//     return true;
// }

// bool balance (char * str){
//     if(*str == '\0'){
//         return true;
//     } 
//     if((*str == '(' || *str == '{' || *str == '[') && (*str == '\0')){
//         return false;
//     } else if(*str == '(' || *str == '{' || *str == '['){
//         return balance(str+1);
//     } else if (*str == ')' && *(str-1) =='('){
//         str--;
//         int i = 0;
//         int k = 2;
//         while(str[k] != '\0'){
//             str[i] = str[k];
//             i++;
//             k++; 
//         }
//         str[i] = '\0';
//         return balance(str);
//     } else if(*str == '}' && *(str-1) =='{'){
//         str--;
//         int i = 0;
//         int k = 2;
//         while(str[k] != '\0'){
//             str[i] = str[k];
//             i++;
//             k++; 
//         }
//         str[i] = '\0';
//         return balance(str);
//     } else if(*str == ']' && *(str-1) =='['){
//         str--;
//         int i = 0;
//         int k = 2;
//         while(str[k] != '\0'){
//             str[i] = str[k];
//             i++;
//             k++; 
//         }
//         str[i] = '\0';
//         return balance(str);
//     } else {
//         return false;
//     }
//     return true;
// }

bool balance(char *ptr, char * str){
    if(*str == '\0'){
        return true;
    }
    if(*str == '(' || *str == '{' || *str == '['){
        *ptr = *str;
        return balance(ptr + 1, str + 1);
    }else if(*str == '}' && *(ptr-1) =='{'){
        return balance(ptr - 1, str+1);
    }else if(*str == ']' && *(ptr-1) =='['){
        return balance(ptr - 1, str+1);
    }else if(*str == ')' && *(ptr-1) =='('){
        return balance(ptr - 1, str+1);
    } else{
        return false;
    }
    return true;
}

bool is_balanced (char * str){
    char ptr[strlen(str) + 1];
    return balance(ptr, str);
    
}


int main(void) {
    int count = 1;
    {
        char *input = "{[()]}";
        printf("Test %d:\n", count++);
        printf("Expected:true\n");
        printf("Actual  :%s\n", is_balanced(input) ? "true" : "false");
        printf("\n");
    }

    {
        char *input = "{[(])}";
        printf("Test %d:\n", count++);
        printf("Expected:false\n");
        printf("Actual  :%s\n", is_balanced(input) ? "true" : "false");
        printf("\n");
    }

    {
        char *input = "{}[](((((())))))";
        printf("Test %d:\n", count++);
        printf("Expected:true\n");
        printf("Actual  :%s\n", is_balanced(input) ? "true" : "false");
        printf("\n");
    }

    {
        char *input = "{{}[]()}{[][]}";
        printf("Test %d:\n", count++);
        printf("Expected:true\n");
        printf("Actual  :%s\n", is_balanced(input) ? "true" : "false");
        printf("\n");
    }

    {
        char *input = "{{}[[{}]]()}{}[]";
        printf("Test %d:\n", count++);
        printf("Expected:true\n");
        printf("Actual  :%s\n", is_balanced(input) ? "true" : "false");
        printf("\n");
    }

    {
        char *input = "";
        printf("Test %d:\n", count++);
        printf("Expected:true\n");
        printf("Actual  :%s\n", is_balanced(input) ? "true" : "false");
        printf("\n");
    }

    {
        char *input = "{}{}{}}";
        printf("Test %d:\n", count++);
        printf("Expected:false\n");
        printf("Actual  :%s\n", is_balanced(input) ? "true" : "false");
        printf("\n");
    }

    {
        char *input = "{{{{{}}}}} {}{}}";
        printf("Test %d:\n", count++);
        printf("Expected:false\n");
        printf("Actual  :%s\n", is_balanced(input) ? "true" : "false");
        printf("\n");
    }
}