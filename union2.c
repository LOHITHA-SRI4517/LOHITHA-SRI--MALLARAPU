#include<stdio.h>
union student{
	int roll;
	float marks;
	char grade;
}s;
int main(){
	s.roll=101;
	s.grade='A';
	s.marks=98.6;
	printf("\nSIZE OF S IS:%d",sizeof(s));//used to print size
	printf("\nSTUDENT ROLL NUM:%d",s.roll);
	printf("\nSTUDENT MARKS:%f",s.marks);
	printf("\nSTUDENT GRADE:%c",s.grade);
	return 0;
}
