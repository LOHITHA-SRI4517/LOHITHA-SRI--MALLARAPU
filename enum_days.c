#include<stdio.h>
enum days{sun,mon=5,tue=1,wed,thur,fri,sat};
int main(){
	enum days d;
	d=mon;
	printf("\n%d",d);
	return 0;
}
