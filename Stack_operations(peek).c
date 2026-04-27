#include<stdio.h>
#define MAX 5  	//macros
int stack[MAX],a;
int top=-1;
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
