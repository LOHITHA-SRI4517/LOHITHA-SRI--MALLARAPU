#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

int main(){
    struct node *head=NULL,*temp=NULL,*newnode,*del;
    int n,i;

    printf("ENTER N VALUE: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        newnode=(struct node*)malloc(sizeof(struct node));

        printf("Enter data: ");
        scanf("%d",&newnode->data);

        newnode->link=NULL;

        if(head==NULL){
            head=temp=newnode;
        }
        else{
            temp->link=newnode;
            temp=newnode;
        }
    }

    // DELETE BEGINNING
    if(head==NULL){
        printf("List is empty");
        return 0;
    }

    del=head;
    head=head->link;
    free(del);

    temp=head;
    printf("AFTER DELETE: ");
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->link;
    }

    return 0;
}
