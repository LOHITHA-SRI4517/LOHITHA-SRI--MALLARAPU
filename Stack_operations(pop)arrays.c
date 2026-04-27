#include<stdio.h>
#define MAX 5  	//macros
int stack[MAX],a;
int top=-1;
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
