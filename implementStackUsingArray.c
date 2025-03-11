#include<stdio.h>
#define N 5

int stack[N], top = -1;

void push(int value){

    if(top == N - 1){
        printf("Stack Overflow.\n");
        return;
    }
    else{

        printf("%d is Pushed in the Stack.\n", value);
        top++;
        stack[top]=value;
    }
}

int pop(){

    int item;

    if(top==-1){
        printf("Underflow.\n");
        return -1;
    }
    else{
        printf("\n Popped: %d \n", stack[top]);
        item=stack[top];
        top--;
        return item;
    }
}

int topElement(){
    if(top==-1){
        printf("Stack is empty\n");
    }
    else{
        printf("Top: %d\n", stack[top]);
    }
}

void display(){
    for(int i=0; i<=top; i++){
        printf("%d ", stack[i]);
    }
    printf("\n");
}


int main(){

    int choice, value;

    


    while(1){

        printf("1. Push\n2. Pop\n3. Top\n4. Display\n5. Exit\n");
        printf("Enter the Choice: ");
        scanf("%d", &choice);

        switch(choice){

            case 1:
                    printf("Enter the Value to Push: ");
                    scanf("%d", &value);
    
                    push(value);
                    break;
            
            case 2:
                    pop();
                    break;
    
            case 3: 
                    topElement();
                    break;
    
            case 4:
                    display();
                    break;
    
            case 5:
                    printf("Exiting...");
                    return 0;
            default:
                    printf("Wrong Choice.\n");
    
        }
    }
    

}