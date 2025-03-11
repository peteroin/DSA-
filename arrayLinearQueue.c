#include<stdio.h>
#define N 5

int queue[N], rear=-1, front=-1;

void insert(int value){
    if(rear==N-1){
        printf("Overflow\n");
    }
    else if(rear==-1 && front ==-1){
        rear = front = 0;
        queue[rear]=value;
    }
    else{
        rear++;
        queue[rear]=value;
    }
}

void delete(){
    if(front==-1 && rear==-1){
        printf("Underflow\n");
    }
    else if(front==rear){
        printf("Deleting : %d\n", queue[front]);
        front=rear=-1;
    }
    else{
        printf("Deleting: %d\n", queue[front]);
        front++;
    }
}

void display(){
    if(front==-1 && rear==-1){
        printf("Queue is Empty\n");
    }
    else{
        for(int i=front; i < rear + 1; i++){
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main(){

    int choice, value;

    while(1){

        printf("1. Insert\n2. Delete\n3. Display\n4. Exit\n");

        printf("Enter the Choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                printf("Enter the value to Insert: ");
                scanf("%d",&value);
                insert(value);
                break;

            case 2:
                delete();
                break;

            case 3:
                display();
                break;
        
            case 4:
                printf("Exiting...\n");
                return 0;

            default:
                printf("Enter valid Choice.\n");
        }
    }

    

    return 0;
}