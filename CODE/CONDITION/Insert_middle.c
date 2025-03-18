#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node *next;
};

struct Node* createNode(int data) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node)); 
    newNode->data = data; 
    newNode->next = NULL;  
    return newNode;
}

void insertMiddle(struct Node *head, int data, int position) {
    struct Node *newNode = createNode(data);  
    struct Node *current = head;

    for (int i = 1; i < position - 1; i++) {
        current = current->next;
        if (current == NULL) {
            printf("Position out of bounds.\n");
            return;
        }
    }

    newNode->next = current->next;
    current->next = newNode;
}

void printList(struct Node *head) {
    struct Node *current = head;
    while (current != NULL) {
        printf("%d -> ", current->data); 
        current = current->next;  
    }
    printf("NULL\n");
}

int main() {
    struct Node *head = NULL;
    struct Node *second = NULL;
    struct Node *third = NULL;
    head = createNode(10);
    second = createNode(20);
    third = createNode(30);
    head->next = second;
    second->next = third;
    printf("Original Linked List: ");
    printList(head);
    insertMiddle(head, 25, 2);
    printf("Linked List After Insertion: ");
    printList(head);
    return 0;
}