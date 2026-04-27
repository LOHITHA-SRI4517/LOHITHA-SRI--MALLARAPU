#include<stdio.h>
#define MAX 5  	//macros
int stack[MAX],a;
int top=-1,i;
void push(){
	if(top==MAX-1){
		printf("\nSTACK IS OVERFLOWED.");
	}
	else{
		printf("\nENTER THE ELEMNT TO BE INSERTED:");
		scanf("%d",&a);
		top++;
		stack[top]=a;
	}
}
void pop(){
	if(top==-1){
		printf("\nSTACK IS UNDERFLOWED.");
	}
	else{
		int temp;
		temp=stack[top];
		printf("\nTHE POPPED ELEMENT IS %d:",temp);
		top--;
	}
}
void peek(){
	if(top==-1){
		printf("\nSTACK IS UNDERFLOWED.");
	}
	else{
		int temp;
		temp=stack[top];
		printf("\nTHE TOP MOST ELEMENT IS %d:",temp);
	}
}
void display(){
	if(top==-1){
		printf("\nSTACK IS UNDERFLOWED.");
	}
	else{
	for(i=top;i>=0;i--){
		printf("\nELEMENTS IN STACK ARE: %d",stack[i]);
	}
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
			case 4:
				display();
			break;
			default:
				printf("\nINVALID OPTION.");
		}
		printf("\nDO YOU WANT ANOTHER OPTION(YES:1||NO:0):");
	scanf("%d",&ch);}
	return 0;}
