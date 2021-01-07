#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct {
    int *data;
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
    ptr->data = calloc(n, sizeof(int));
    ptr->top = 0;
    ptr->capacity = n;
    ptr->size = 0;
    return ptr;
}

int size(stack *ptr){
    // int count = 0;
    // int * ptr2 = ptr->data;
    // while(*ptr2 != 0){
    //     ptr2++;
    //     count++;
    // }
    // return count;
    return ptr->size;
}

bool is_empty(stack *ptr){
    if(ptr->top == 0){
        return true;
    }
    return false;
}

void push(stack *ptr, int value){
    ptr->data[ptr->top] = value; 
    ptr->top++;
    ptr->size++;

    if(ptr->capacity == ptr->top){
        // int n = ptr->capacity;
        ptr->data = realloc(ptr->data, 1.5 * ptr->capacity * sizeof(int));
        ptr->capacity = (int) 1.5 * ptr->capacity;
    }
}

int pop (stack *ptr){
    if(ptr->top == 0){
        return 0;
    }
    int * ptr2 = ptr->data;    
    int value = ptr2[(ptr->top - 1 )];
    ptr2[(ptr->top - 1)] = 0; 
    ptr->top--;
    ptr->size--;
    return value;
}

int pop(stack *ptr);

int main (void){
    int n = 4;
    stack *ptr = new_stack(n);

    push(ptr, 3);

    push(ptr, 4);

    print_array(ptr->data, ptr->top);

    printf("%d\n", pop(ptr));

    print_array(ptr->data, ptr->top);

    free(ptr->data);

    free(ptr);

}