#include <stdio.h>
#include <stdlib.h>

// Structure to represent a node
struct Node {
    int data;
    struct Node* next;
};

struct Node* top = NULL; // initially, stack is empty

// Function to push an element onto the stack
void push(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node)); // create node
    newNode->data = value;
    newNode->next = top; // link new node to current top
    top = newNode;       // update top
    printf("%d pushed to stack\n", value);
}

// Function to pop an element from the stack
void pop() {
    if (top == NULL) {
        printf("Stack Underflow! Nothing to pop\n");
    } else {
        printf("%d popped from stack\n", top->data);
        struct Node* temp = top;
        top = top->next;   // move top pointer down
        free(temp);        // delete old top
    }
}

// Function to display the stack
void display() {
    if (top == NULL) {
        printf("Stack is empty\n");
    } else {
        struct Node* temp = top;
        printf("Stack elements are:\n");
        while (temp != NULL) {
            printf("%d\n", temp->data);
            temp = temp->next;
        }
    }
}

int main() {
    push(10);
    push(20);
    push(30);
    display();

    pop();
    display();

    return 0;
}
