#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *temp=0,*tail=0,*head=0;
void create(){
	struct node *newnode=0;
	int i,n;
	printf("ENTER N VALUE:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("ENTER NODE %d DATA:",i+1);
		scanf("%d",&newnode->data);
		newnode->next=0;
	if (head==0){
		head=tail=newnode;
		tail->next=head;
	}else {
		tail->next=newnode;
		tail = newnode;
		tail->next=head;
	}}
}
void display(){
	temp=head;
	do{
		printf("%d",temp->data);
		temp=temp->next;
	}
	while(temp!=head);{
	}}
	void delete_front(){
		if(head==0){
			printf("LIST IS EMPTY");
		}
		else if(head==tail){
			free(head);
		head=tail=0;
		}
		else{
			temp=head;
			head=head->next;
			tail->next=head;
			free(temp);
		}
		printf("AFTER DELETION:")
		display();
	}
	void delete_end(){
		if(head==0){
			printf("LIST IS EMPTY")
		}
		else if(head==tail){
			free(head);
			tail=head=0;
		}
		else{
			temp=head;
		while(temp->next!=tail){
		temp=temp->next;
		}
		temp->next=head;
		free(tail);
		tail=temp;
		}
	}
