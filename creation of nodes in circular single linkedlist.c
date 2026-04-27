//CIRCULAR SINGLY LINKED LIST CREATION
#include<Stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};int main(){
struct node *head = NULL, *tail = NULL, *temp = NULL;
void create(){
	struct node *newnode=NULL;
	int i,n;
	printf("\nENTER N SIZE:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("\nENTER NODE DATA %d:",i+1);
		scanf("%d",&newnode->data);
		newnode->next=NULL;
		if(head==NULL){
			head=tail=newnode;//head=tail; head=newnode;
			tail->next=head;
		}
		else{
			tail->next=newnode;
			tail=newnode;
			tail->next=head;
		}
}
