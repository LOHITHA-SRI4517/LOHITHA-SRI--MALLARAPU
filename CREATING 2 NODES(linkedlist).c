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
	struct node *newnode2=(struct node*)malloc(sizeof(struct node));
	//printf("NEW NODE=%d",newnode->data);
	printf("ENTER NODE 2 DATA:");
	scanf("%d",&newnode2->data);
	newnode2->link=NULL;
	newnode->link=newnode2;
	printf("%d->%d",newnode->data,newnode2->data);
	return 0;
}
