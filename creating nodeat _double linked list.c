#include<stdio.h>
#include<stdlib.h>

struct node
{
    struct node *prev;
    int data;
    struct node *next;
};

struct node *head = NULL, *tail = NULL, *temp = NULL;

void create()
{
    struct node *newnode;
    int n, i;

    printf("Enter n size: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        newnode = (struct node*)malloc(sizeof(struct node));

        printf("Enter node %d data: ", i + 1);
        scanf("%d", &newnode->data);

        newnode->prev = NULL;
        newnode->next = NULL;

        if(head == NULL)
        {
            head = tail = newnode;
        }
        else
        {
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
        }
    }
}

void display()
{
    temp = head;

    while(temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

int main()
{
    create();
    display();
    return 0;
}
