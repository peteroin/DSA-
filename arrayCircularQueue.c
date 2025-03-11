#include<stdio.h>
#define N 5

int queue[N], front=-1, rear=-1;

void insert(int value){

    if((rear+1)%N==front){
        printf("Queue is Full\n");
    }
    else if(front==-1 && rear==-1){
        printf("Inserting %d: \n", value);
        front=rear=0;
        queue[rear]=value;
    }
    else{
        printf("Inserting %d: \n", value);
        rear=(rear+1)%N;
        queue[rear]=value;
    }
}

void delete(){
    if(front==-1 && rear==-1){
        printf("Queue is Empty\n");
    }
    else if(front==rear){
        int del=queue[front];
        front=rear=-1;
        printf("Deleting: %d\n", del);
    }
    else{
        printf("Deleting: %d\n", queue[front]);
        front=(front+1)%N;
        
    }
}

void display(){

    int i=front;

    if(front==-1 && rear==-1){
        printf("Queue is Empty.\n");
    }
    else{
        while(i!=rear){
            printf("%d ", queue[i]);
            i=(i+1)%N;
        }
        printf("%d ", queue[rear]);
        printf("\n");
    }
}

int main(){

    int choice, value;

    while(1){

        printf("1. Insert\n2. Delete\n3. Display\n4. Exit\n");

        printf("Enter your Choice: ");
        scanf("%d", &choice);
    
        switch(choice){
    
            case 1:
                printf("Enter the Value to Insert: ");
                scanf("%d", &value);
    
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
                printf("Enter Valid Choice.\n");
        }

    }



    return 0;
}