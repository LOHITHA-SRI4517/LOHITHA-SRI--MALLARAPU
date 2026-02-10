#include<stdio.h>
typedef union number{
	int i;	
}num;
	int main(){
	num n,a;
	printf("ENTER A VALUE:");
	scanf("%d",&a);
	if(a.i%2==0){
		printf("EVEN\n");
	}
	else{
		printf("ODD\n");
	}
	return 0;
}
	

