#include<stdio.h>
#define MAX 5

int queue[MAX];
int rear=-1, front=-1;

void enqueue(){
    int a;
    if(rear==MAX-1){
        printf("QUEUE IS OVERFLOW/FULL.");
    }
    else{
        printf("\nENTER ELEMENT: ");
        scanf("%d",&a);

        if(front==-1){
            front=rear=0;
        }
        else{
            rear++;
        queue[rear]=a;
    }}
}

void dequeue(){
    if(front==-1){
        printf("\nQUEUE IS EMPTY.");
    }
    else if(front==rear){
        printf("\nDEQUEUED ELEMENT IS: %d", queue[front]);
        front=rear=-1;
    }
    else{
        printf("\nDEQUEUED ELEMENT IS: %d", queue[front]);
        front++;
    }
}

void peek(){
    if(front==-1){
        printf("\nQUEUE IS EMPTY.");
    }
    else{
        printf("\nFRONT ELEMENT IS: %d", queue[front]);
    }
}

void display(){
    int i;
    if(front==-1){
        printf("\nQUEUE IS EMPTY.");
    }
    else{
        printf("\nELEMENTS IN QUEUE: ");
        for(i=front;i<=rear;i++){
            printf("%d ", queue[i]);
        }
    }
}

int main(){
    int ch=1, choice;

    while(ch){
        printf("\n1.ENQUEUE\n2.DEQUEUE\n3.PEEK\n4.DISPLAY");
        printf("\nENTER YOUR CHOICE: ");
        scanf("%d",&choice);

        switch(choice){
            case 1: enqueue(); break;
            case 2: dequeue(); break;
            case 3: peek(); break;
            case 4: display(); break;
            default: printf("\nINVALID OPTION.");
        }
 printf("\nDO YOU WANT ANOTHER OPTION? YES:1 NO:0: ");
        scanf("%d",&ch);
    }

    return 0;
}
