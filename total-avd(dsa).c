#include<stdio.h>
struct student{
	int marks;
};
	int main(){
	struct student s[100];
	int i,n,total=0;
	float avg;
	printf("ENTER N SIZE:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("\nENTER STUDENT %d marks:",i+1);
		scanf("%d",&s[i].marks);
		total=total+s[i].marks;
	} 
	avg=(float)total/n;
	printf("\n TOTAL MARKS=%d\nAVERAGE=%f",total,avg);
	return 0; 
	}	
