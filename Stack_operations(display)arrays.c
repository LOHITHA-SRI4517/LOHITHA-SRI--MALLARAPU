#include<stdio.h>
#define MAX 5  	//macros
int stack[MAX],a;
int top=-1,i;
void display(){
	if(top==-1){
		printf("\nSTACK IS UNDERFLOWED.");
	}
	else{
	for(i=top;i>=0;i--){
		printf("\n %d",stack[i]);
	}
	}
}
