#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *front=NULL,*rear=0,*temp=NULL;
	void enqueue(){
	struct node *newnode=NULL;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("\nENTER DATA:");
	scanf("%d",&newnode->data);
	
}
void dequeue(){
	if(front==0){
		printf("EMPTY");
	}
	else{
		temp=front;
		front=front->next;
		printf("THE POPPED ELEMNT IS:%d",temp->data);
		free(temp);
	}
}
void peek(){
	if (front==0){
		printf("STACK IS EMPTY");
	}
	else{
		printf("THE PEEK VALUE IN STACK IS:%d",front->data);
	}
void display(){
	if(front==0){
		printf("\nUNDERFLOW.");
	}
	else{
		temp=front;
	}
	while(temp!=0){
		printf("%d->",temp->data);
		temp=temp->next;
	}
}	
}
int main(){
int ch=1, choice;

    while(ch){
        printf("\n1.ENQUEUE\n2.DEQUEUE\n3.PEEK\n4.DISPLAY.");
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
