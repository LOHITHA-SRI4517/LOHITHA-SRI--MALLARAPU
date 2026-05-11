#include<stdio.h>
struct student{
	int roll;
	char name[20];
	float marks;
};
int main(){
	struct student s1,s2;
	printf("ENTER STUDENT 1 ROLL NUMBER:");
	scanf("%d",&s1.roll);
	printf("ENTER NAME OF STUDENT 1:");
	scanf("%s",s1.name);
	printf("ENTER MARKS OF STUDENT 1:");
	scanf("%f",&s1.marks);
	s2=s1;
	printf("---STUDENT 2 DETAILS---");
	printf("\nROLL NUMBER OF STUDENT 2:%d",s2.roll);
	printf("\nNAME OF STUDENT 2:%s",s2.name);
	printf("\nMARKS OF STUDENT 2:%.2f",s2.marks);
	return 0;	
}
