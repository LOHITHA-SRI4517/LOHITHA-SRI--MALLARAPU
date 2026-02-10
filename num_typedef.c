#include<stdio.h>
typedef union number{
	int n;	
}num;
	int main(){
	num i;
	for(i.n=1;i.n<=10;i.n++){
	printf("%d\n",i.n);
	}
	return 0;
	}

