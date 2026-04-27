#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *top=NULL,*temp=NULL;
	void push(){
	struct node *newnode=NULL;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("\nENTER DATA:");
	scanf("%d",&newnode->data);
	newnode->next=top;
	top=newnode;
}
void pop(){
	if(top==0){
		printf("EMPTY");
	}
	else{
		temp=top;
		top=top->next;
		printf("THE POPPED ELEMNT IS:%d",temp->data);
		free(temp);
	}
}
void peek(){
	if (top==0){
		printf("STACK IS EMPTY");
	}
	else{
		printf("THE PEEK VALUE IN STACK IS:%d",top->data);
	}
}
int main(){
	int choice,ch=1;
	while(ch){
		printf("\n1.PUSH.\n2.POP.\n3.PEEK.\n4.DISPLAY.\n");
		printf("\nENTER YOUR CHOICE:");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				push();
			break;
			case 2:
				pop();
			break;
			case 3:
				peek();
			break;
			default:
				printf("\nINVALID OPTION.");
		}
	printf("\nDO YOU WANT ANOTHER OPTION(YES:1||NO:0):");
	scanf("%d",&ch);}
	return 0;
}
