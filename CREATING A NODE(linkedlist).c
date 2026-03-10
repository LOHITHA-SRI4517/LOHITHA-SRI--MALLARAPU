#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;  //self referential structures
};
int main(){
	struct node *head=NULL;
	struct node *newnode=(struct node*)malloc(sizeof(struct node));
	printf("ENTER NODE:");
	scanf("%d",&newnode->data);
	newnode->link=NULL;
	head=newnode;
	printf("NEW NODE=%d",newnode->data);
	return 0;
}
