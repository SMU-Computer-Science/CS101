#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int value;
    struct node *next;
} node;

void print(node *head){
    if(head == NULL){
        return;
    }
    while(head->next != NULL){
        printf("%d -> ", head->value);
        head = head->next;
    }
    printf("%d -> ", head->value);
    printf("NULL\n");
}

int size(node *head) {
    int count = 0;
    while (head != NULL) {
        head = head->next;
        count++;
    }
    return count;
}

// int size(node *head){
//     int count = 1;
//     if(head == NULL){
//         return 0;
//     }
//     while(head->next != NULL){
//         count++;
//         head = head->next;
//     }
//     return count;
// }

// node *add(node *head, int data){
//     node*temp = head;

//     if(head == NULL){
//         node *current = malloc(sizeof(node));
//         current->value = data;
//         current->next = NULL;
//         head = current;
//         return head;
//     }
    
//     while(head->next != NULL){
//         head = head->next;
//     }
//     node *current = malloc(sizeof(node));
//     current->value = data;
//     current->next = NULL;
//     head->next = current;
//     head = temp;
//     return head;
// }

node *add(node *ptr, int value) {
    node *new_node = malloc(sizeof(node));

    // malloc is unsucessful
    if (new_node == NULL) {
        return NULL;
    }

    // initialize the node
    new_node->value = value;
    new_node->next = NULL;

    if (ptr == NULL) {
        return new_node;
    }

    while (ptr != NULL && ptr->next != NULL) {
        ptr = ptr->next;
    }
    ptr->next = new_node;
    return ptr;
}

void free_linked_list(node *head) {
    if(head == NULL){
        return;
    }
    free_linked_list(head->next);  
    free(head);
}

int main(void) {
    {
        node *head = NULL;
        head = add(head, 3);
        add(head, 4);
        add(head, 5);
        printf("Expected:3 -> 4 -> 5 -> NULL\n");
        printf("Actual  :");
        print(head);
        printf("Expected(size):3\n");
        printf("Actual  (size):%d\n", size(head));
        free_linked_list(head); // no test for free_linked_list
        

    }
}