#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Function to create a new node
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (!newNode) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node at the end of the list
void append(Node** head, int data) {
    Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    
    Node* temp = *head;
    while (temp->next != NULL)
        temp = temp->next;
    
    temp->next = newNode;
}

// Function to concatenate two linked lists
void concatenate(Node** head1, Node** head2) {
    if (*head1 == NULL) {
        *head1 = *head2;
        return;
    }
    
    Node* temp = *head1;
    while (temp->next != NULL)
        temp = temp->next;
    
    temp->next = *head2;
    *head2 = NULL; // Ensuring the second list does not point to concatenated list
}

void printList(Node* head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

// Function to take user input and create a linked list
void createList(Node** head) {
    int n, value;
    printf("Enter the number of elements in the list: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &value);
        append(head, value);
    }
}

int main() {
    Node* list1 = NULL;
    Node* list2 = NULL;

    printf("Create first linked list:\n");
    createList(&list1);
    
    printf("Create second linked list:\n");
    createList(&list2);

    printf("\nFirst List: ");
    printList(list1);

    printf("Second List: ");
    printList(list2);

    // Concatenating lists
    concatenate(&list1, &list2);

    printf("\nConcatenated List: ");
    printList(list1);

    return 0;
}
