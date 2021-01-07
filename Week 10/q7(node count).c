#include <stdio.h>

typedef struct node {
    int value;
    struct node *next;
} node;

int size (node* start){ 
    if (start == NULL){
        return 0;
    }

    int count = 0;
    while(start->next != NULL){
        count++;
        start = start->next;
    }
    
    return count + 1;
}

int main(void) {
    {
        node last = {1, NULL};
        node second = {2, &last};
        node head = {3, &second};
        printf("Test 1\n");
        printf("Expected:3\n");
        printf("Actual  :%d\n", size(&head));
        printf("\n");
    }

    {
        node last = {2, NULL};
        node head = {3, &last};
        printf("Test 2\n");
        printf("Expected:2\n");
        printf("Actual  :%d\n", size(&head));
        printf("\n");
    }

    {
        node head = {3, NULL};
        printf("Test 3\n");
        printf("Expected:1\n");
        printf("Actual  :%d\n", size(&head));
        printf("\n");
    }

    {
        printf("Test 4\n");
        printf("Expected:0\n");
        printf("Actual  :%d\n", size(NULL));
        printf("\n");
    }
}