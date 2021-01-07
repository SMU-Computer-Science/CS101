#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include<string.h>

typedef struct {
    char *data;
    int top;
    int capacity;
    int size;
} stack;

void print_array(int *arr, int n) {
    if (arr == NULL) {
        printf("NULL\n");
        return;
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", *arr++);
    }
    printf("\n");
}


stack *new_stack(int n){
    stack * ptr = malloc(sizeof(stack));
    ptr->data = calloc(n, sizeof(char));
    ptr->top = 0;
    ptr->capacity = n;
    ptr->size = 0;
    return ptr;
}

int size(stack *ptr){
    return ptr->size;
}

bool is_empty(stack *ptr){
    if(ptr->top == 0){
        return true;
    }
    return false;
}

void push(stack *ptr, int value){

    char * ptr2 = ptr->data;
    while(*ptr2 != 0){
        ptr2++;
    }
    *ptr2 = value; 
    ptr->top++;
    ptr->size++;


    if(ptr->capacity == ptr->top){
        // int n = ptr->capacity;
        ptr->data = realloc(ptr->data, 1.5 * ptr->capacity * sizeof(int));
        ptr->capacity = (int) 1.5 * ptr->capacity;
    }
}

char pop (stack *ptr){
    if(ptr->top == 0){
        return 0;
    }
    char * ptr2 = ptr->data;    
    char value = ptr2[(ptr->top - 1 )];
    ptr2[(ptr->top - 1)] = 0; 
    ptr->top--;
    ptr->size--;
    return value;
}



bool is_balanced (char *input){
    int n = strlen(input) + 1;
    stack *ptr = new_stack(n);
    while(*input != '\0'){
        if(*input == '(' || *input == '[' || *input == '{'){
            push(ptr, *input);
        } else if(*input == ')' || *input == '}' || *input == ']'){
            char counter = pop(ptr);
            if(*input == ')' && counter != '('){
                free(ptr->data);
                free(ptr);
                return false;
            } else if(*input == '}' && counter != '{'){
                free(ptr->data);
                free(ptr);
                return false;
            } else if(*input == ']' && counter != '['){
                free(ptr->data);
                free(ptr);
                return false;
            }
        }
        input++;
    }
    free(ptr->data);
    free(ptr);

    return true;
}
int main (void){
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