#include<stdio.h>
#define MAX 5  	//macros
int stack[MAX],a;
int top=-1;
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
