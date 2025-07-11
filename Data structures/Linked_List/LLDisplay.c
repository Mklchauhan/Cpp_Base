#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> 

// Step 1: Define the Node structure
struct Node {
    int data;
    struct Node* next;
};

// Step 2: Function to create a new node
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

// Step 3: Function to display the linked list
void display(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Step 4: Free memory
void freeList(struct Node* head) {
    struct Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

// BAD node that is allocated and never connected = real leak
void createLeakyNode() {
    struct Node* leak = (struct Node*)malloc(sizeof(struct Node));
    leak->data = 999;
    leak->next = NULL;
}

int main() {
    // Creating nodes
    struct Node* head = createNode(10);
    head->next = createNode(20);
    head->next->next = createNode(30);
    head->next->next->next = createNode(50);

    createLeakyNode();

    printf("Linked List:\n");
    display(head);

    //freeList(head);

    sleep(30); 
    return 0;
}