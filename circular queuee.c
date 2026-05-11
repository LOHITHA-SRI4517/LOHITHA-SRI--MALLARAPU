#include<stdio.h>
#define MAX 100

int queue[MAX];
int front = -1;
int rear = -1;
int n;

void enqueue()
{
    int a;

    if((rear + 1) % n == front)
    {
        printf("\nOverflow");
    }
    else
    {
        printf("Enter element: ");
        scanf("%d", &a);

        if(front == -1 && rear == -1)
        {
            front = rear = 0;
        }
        else
        {
            rear = (rear + 1) % n;
        }

        queue[rear] = a;
    }
}

void dequeue()
{
    if(front == -1)
    {
        printf("\nUnderflow");
    }
    else if(front == rear)
    {
        printf("\nDequeued element: %d", queue[front]);
        front = rear = -1;
    }
    else
    {
        printf("\nDequeued element: %d", queue[front]);
        front = (front + 1) % n;
    }
}

void peek()
{
    if(front == -1)
    {
        printf("\nQueue is empty");
    }
    else
    {
        printf("\nFront element: %d", queue[front]);
    }
}

void display()
{
    int i;

    if(front == -1)
    {
        printf("\nQueue is empty");
    }
    else
    {
        printf("\nQueue elements are:\n");

        i = front;

        while(i != rear)
        {
            printf("%d ", queue[i]);
            i = (i + 1) % n;
        }

        printf("%d", queue[rear]);
    }
}

int main()
{
    int choice, ch = 1;

    printf("Enter queue size: ");
    scanf("%d", &n);

    while(ch)
    {
        printf("\n\n1.Enqueue");
        printf("\n2.Dequeue");
        printf("\n3.Peek");
        printf("\n4.Display");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                enqueue();
                break;

            case 2:
                dequeue();
                break;

            case 3:
                peek();
                break;

            case 4:
                display();
                break;

            default:
                printf("\nInvalid choice");
        }

        printf("\nDo you want another operation? (1/0): ");
        scanf("%d", &ch);
    }

    return 0;
}
