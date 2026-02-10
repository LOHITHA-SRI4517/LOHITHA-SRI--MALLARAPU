#include<stdio.h>
typedef union number{
	int n;	
}num;
	int main(){
	num i;
	i.n=1;
	while(i.n<=10){
	printf("%d\n",i.n);
	i.n++;
	}
	return 0;
	}
