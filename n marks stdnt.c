#include<stdio.h>
struct student{
	int roll;
	char name[20];
	struct marks{
		int marks[200];
	}d;
}s;
int main(){
	int n,i;
	printf("ENTER N VALUE:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("ENTER MARKS OF SUBJECT %d:",i+1);
		scanf("%d",&s.d.marks[i]);
	}
	for(i=0;i<n;i++){
		 printf("Subject %d Marks = %d\n", i+1, s.d.marks[i]);
}
	}
