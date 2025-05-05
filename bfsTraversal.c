#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int adj[MAX][MAX];      // Adjacency matrix
int visited[MAX];       // Visited array
int queue[MAX];         // Queue array
int front = -1, rear = -1; // Queue pointers

// Function to enqueue an element
void enqueue(int vertex) {
    if (rear == MAX - 1)
        printf("Queue Overflow\n");
    else {
        if (front == -1) front = 0;
        queue[++rear] = vertex;
    }
}

// Function to dequeue an element
int dequeue() {
    if (front == -1 || front > rear)
        return -1;
    else
        return queue[front++];
}

// Function to perform BFS
void bfs(int start, int n) {
    int i;
    enqueue(start);
    visited[start] = 1;

    printf("BFS traversal starting from node %d: ", start);

    while (front <= rear) {
        int current = dequeue();
        printf("%d ", current);

        for (i = 0; i < n; i++) {
            if (adj[current][i] == 1 && !visited[i]) {
                enqueue(i);
                visited[i] = 1;
            }
        }
    }
    printf("\n");
}

// Main function
int main() {
    int n, i, j, start;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix (%d x %d):\n", n, n);
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &adj[i][j]);

    printf("Enter starting node (0 to %d): ", n - 1);
    scanf("%d", &start);

    // Initialize visited array
    for (i = 0; i < n; i++)
        visited[i] = 0;

    bfs(start, n);

    return 0;
}
