#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Function to check if the stack is empty
int isEmpty(Node* top) {
    return top == NULL;
}

// Function to push an element onto the stack
void push(Node** top, int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (!newNode) {
        printf("Heap Overflow\n");
        return;
    }
    newNode->data = value;
    newNode->next = *top;
    *top = newNode;
    printf("%d pushed to stack\n", value);
}

// Function to pop an element from the stack
int pop(Node** top) {
    if (isEmpty(*top)) {
        printf("Stack Underflow\n");
        return -1;
    }
    Node* temp = *top;
    int poppedValue = temp->data;
    *top = temp->next;
    free(temp);
    return poppedValue;
}

// Function to return the top element of the stack
int peek(Node* top) {
    if (isEmpty(top)) {
        printf("Stack is empty\n");
        return -1;
    }
    return top->data;
}

// Function to display the stack
void display(Node* top) {
    if (isEmpty(top)) {
        printf("Stack is empty\n");
        return;
    }
    Node* temp = top;
    printf("Stack: ");
    while (temp) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    Node* top = NULL;
    int choice, value;

    while (1) {
        printf("\n----- Stack Operations (Linked List) -----\n");
        printf("1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(&top, value);
                break;
            case 2:
                value = pop(&top);
                if (value != -1)
                    printf("Popped value: %d\n", value);
                break;
            case 3:
                value = peek(top);
                if (value != -1)
                    printf("Top element: %d\n", value);
                break;
            case 4:
                display(top);
                break;
            case 5:
                printf("Exiting program...\n");
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}
