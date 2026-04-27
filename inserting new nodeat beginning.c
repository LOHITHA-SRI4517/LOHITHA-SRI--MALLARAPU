//INSERTION OF ELEMENT AT BEGINNING SINGLE LINKED LIST
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;  //self referential structures
};
int main(){
	struct node *head=NULL,*temp=NULL;
	int n,i;
	printf("ENTER N VALUE:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
	struct node *newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter node %d data:",i+1);
	scanf("%d",&newnode->data);
	newnode->link=NULL;
	if (head==NULL){
		head=newnode;
		temp=newnode;
	}
	else{
		temp->link=newnode;
		temp=newnode;
	}
}
	temp=head;
	while(temp!=NULL){
		printf("BEFORE INSERTING:%d\t",temp->data);	//traversing code
		temp=temp->link;
	}struct node *insertnode=(struct node*)malloc(sizeof(struct node));
	pri
	while(temp!=NULL){
		printf("AFTER INSERTING:%d\t",temp->data);	//traversing code
		temp=temp->link;
	return 0;
}}
