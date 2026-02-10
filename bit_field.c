#include<stdio.h>
struct demo{
	unsigned int a:2;
	unsigned int b:3;
}v;
int main(){
	v.a=3;
	v.b=7;
	printf("%d\n %d\n",v.a,v.b);
	return 0;	
}
