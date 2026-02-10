#include<stdio.h>
 typedef struct student{
	int roll;
	float marks;
}stu;//stu new name for struct student
int main(){
	stu s1,s2;
	s1.roll=543;
	s1.marks=90.5;
	s2.roll=542;
	s2.marks=150.8;
	printf("ROLL IS:%d\nMARKS IS:%f\n---------------------\nROLL IS:%d\nMARKS IS:%f\n",s1.roll,s1.marks,s2.roll,s2.marks);
}
