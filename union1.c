#include<stdio.h>
union student{
	int roll;
	float marks;
}s;
int main(){
	s.roll=101;
	s.marks=98.6;
	printf("\nSIZE OF S IS:%d",sizeof(s));//used to print size
	printf("\nSTUDENT ROLL NUM:%d",s.roll);
	printf("\nSTUDENT MARKS:%f",s.marks);
	return 0;
}
