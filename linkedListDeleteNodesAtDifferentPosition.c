#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Function to insert a node at the end
void insertNode(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    struct Node* temp = *head;
    while (temp->next != NULL)
        temp = temp->next;
    
    temp->next = newNode;
}

// Function to delete a node at the beginning
void deleteAtBeginning(struct Node** head) {
    if (*head == NULL) {
        printf("List is empty.\n");
        return;
    }
    
    struct Node* temp = *head;
    *head = (*head)->next;
    free(temp);
    printf("Node deleted from the beginning.\n");
}

// Function to delete a node at the end
void deleteAtEnd(struct Node** head) {
    if (*head == NULL) {
        printf("List is empty.\n");
        return;
    }
    
    struct Node* temp = *head;
    struct Node* prev = NULL;

    if (temp->next == NULL) {  // Only one node in the list
        free(temp);
        *head = NULL;
        printf("Node deleted from the end.\n");
        return;
    }

    while (temp->next != NULL) {
        prev = temp;
        temp = temp->next;
    }
    
    prev->next = NULL;
    free(temp);
    printf("Node deleted from the end.\n");
}

// Function to delete a node in the middle (at position 'pos', 1-based index)
void deleteAtMiddle(struct Node** head, int pos) {
    if (*head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node* temp = *head;
    struct Node* prev = NULL;

    if (pos == 1) {  // If position is the first node
        *head = temp->next;
        free(temp);
        printf("Node at position %d deleted.\n", pos);
        return;
    }

    for (int i = 1; temp != NULL && i < pos; i++) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Position out of range.\n");
        return;
    }

    prev->next = temp->next;
    free(temp);
    printf("Node at position %d deleted.\n", pos);
}

// Function to display the linked list
void displayList(struct Node* head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;
    int choice, data, pos;

    while (1) {
        printf("\n------ MENU ------\n");
        printf("1. Insert Node at End\n");
        printf("2. Delete Node from Beginning\n");
        printf("3. Delete Node from End\n");
        printf("4. Delete Node from Middle\n");
        printf("5. Display List\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to insert: ");
                scanf("%d", &data);
                insertNode(&head, data);
                break;
            
            case 2:
                deleteAtBeginning(&head);
                break;
            
            case 3:
                deleteAtEnd(&head);
                break;
            
            case 4:
                printf("Enter position to delete: ");
                scanf("%d", &pos);
                deleteAtMiddle(&head, pos);
                break;
            
            case 5:
                displayList(head);
                break;
            
            case 6:
                printf("Exiting...\n");
                exit(0);
            
            default:
                printf("Invalid choice! Please enter again.\n");
        }
    }

    return 0;
}
