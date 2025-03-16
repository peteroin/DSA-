#include <stdio.h>
#include <stdlib.h>

#define MAX 100

// Two stacks
int stack1[MAX], stack2[MAX];
int top1 = -1, top2 = -1;

// Stack operations
void push(int stack[], int *top, int data) {
    if (*top == MAX - 1) {
        printf("Stack Overflow\n");
        return;
    }
    stack[++(*top)] = data;
}

int pop(int stack[], int *top) {
    if (*top == -1) {
        return -1; // Stack underflow
    }
    return stack[(*top)--];
}

// Queue operations
void enqueue(int data) {
    push(stack1, &top1, data);
    printf("%d enqueued\n", data);
}

int dequeue() {
    if (top2 == -1) {
        if (top1 == -1) {
            printf("Queue is empty\n");
            return -1;
        }
        // Transfer elements from stack1 to stack2
        while (top1 != -1) {
            push(stack2, &top2, pop(stack1, &top1));
        }
    }
    return pop(stack2, &top2);
}

// Display the queue
void display() {
    if (top1 == -1 && top2 == -1) {
        printf("Queue is empty\n");
        return;
    }

    printf("Current Queue: ");
    
    // Display elements in stack2 (they are already reversed)
    for (int i = top2; i >= 0; i--) {
        printf("%d ", stack2[i]);
    }

    // Display elements in stack1 (from bottom to top)
    for (int i = 0; i <= top1; i++) {
        printf("%d ", stack1[i]);
    }

    printf("\n");
}

// Driver program
int main() {
    int choice, value;
    
    while (1) {
        printf("\nQueue using Two Stacks\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to enqueue: ");
                scanf("%d", &value);
                enqueue(value);
                break;
            case 2:
                value = dequeue();
                if (value != -1)
                    printf("Dequeued: %d\n", value);
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice, try again!\n");
        }
    }
    
    return 0;
}
