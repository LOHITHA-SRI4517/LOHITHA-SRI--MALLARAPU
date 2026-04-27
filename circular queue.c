#include<stdio.h>
#define MAX 5

int queue[MAX];
int rear = -1, front = -1;

void enqueue(){
    int a;
    if((rear + 1) % MAX == front){
        printf("\nQUEUE IS OVERFLOW / FULL.");
    }
    else{
        printf("\nENTER ELEMENT: ");
        scanf("%d", &a);

        if(front == -1){
            front = rear = 0;
        }
        else{
            rear = (rear + 1) % MAX;
        }

        queue[rear] = a;
        printf("\nENQUEUED ELEMENT IS: %d", a);
    }
}

void dequeue(){
    if(front == -1){
        printf("\nQUEUE IS EMPTY.");
    }
    else if(front == rear){
        printf("\nDEQUEUED ELEMENT IS: %d", queue[front]);
        front = rear = -1;
    }
    else{
        printf("\nDEQUEUED ELEMENT IS: %d", queue[front]);
        front = (front + 1) % MAX;
    }
}

void peek(){
    if(front == -1){
        printf("\nQUEUE IS EMPTY.");
    }
    else{
        printf("\nFRONT ELEMENT IS: %d", queue[front]);
    }
}

void display(){
    int i;
    if(front == -1){
        printf("\nQUEUE IS EMPTY.");
    }
    else{
        printf("\nELEMENTS IN QUEUE: ");
        i = front;
        while(i != rear){
            printf("%d ", queue[i]);
            i = (i + 1) % MAX;
        }
        printf("%d", queue[rear]);
    }
}

int main(){
    int ch = 1, choice;

    while(ch){
        printf("\n\n--- CIRCULAR QUEUE MENU ---");
        printf("\n1. ENQUEUE");
        printf("\n2. DEQUEUE");
        printf("\n3. PEEK");
        printf("\n4. DISPLAY");

        printf("\nENTER YOUR CHOICE: ");
        scanf("%d", &choice);

        switch(choice){
            case 1: enqueue(); break;
            case 2: dequeue(); break;
            case 3: peek(); break;
            case 4: display(); break;
            default: printf("\nINVALID OPTION.");
        }

        printf("\n\nDO YOU WANT ANOTHER OPTION? YES:1 NO:0: ");
        scanf("%d", &ch);
    }

    return 0;
}
