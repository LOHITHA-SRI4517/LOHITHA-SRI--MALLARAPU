#include<stdio.h>
#include<string.h>
struct student{
	int roll;		//CREATING THE STRUCTURE...
	char name[20];
	float marks;
}s;
int main(){
	s.roll=101;
	strcpy(s.name,"LOHI");
	s.marks=90.9;
	printf("\n----STUDENT DETAILS:----\n");
	printf("ROLL NUMBER:%d\nPERSON NAME:%s\nMARKS:%f\n",s.roll,s.name,s.marks);
	return 0;
}
