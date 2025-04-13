#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int adj[MAX][MAX];     // Adjacency matrix
int visited[MAX];      // Visited array
int stack[MAX];        // Stack for DFS
int top = -1;          // Stack top

void push(int val) {
    stack[++top] = val;
}

int pop() {
    return stack[top--];
}

int isEmpty() {
    return top == -1;
}

void DFS(int start, int n) {
    push(start);
    visited[start] = 1;

    while (!isEmpty()) {
        int node = pop();
        printf("%d ", node);

        for (int i = n - 1; i >= 0; i--) {
            if (adj[node][i] == 1 && !visited[i]) {
                push(i);
                visited[i] = 1;
            }
        }
    }
}

int main() {
    int n, start;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &adj[i][j]);

    printf("Enter starting node (0 to %d): ", n - 1);
    scanf("%d", &start);

    // Initialize visited array
    for (int i = 0; i < n; i++)
        visited[i] = 0;

    printf("DFS Traversal starting from node %d: ", start);
    DFS(start, n);

    return 0;
}
