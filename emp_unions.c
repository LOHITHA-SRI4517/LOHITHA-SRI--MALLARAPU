#include<stdio.h>
union employee{
	int empid;
	char name[200];
	float salary;	
}s;
	int main(){
	s.empid=5433;
	strcpy(s.name,"seetha");
	s.salary=58000.23;
	printf("\nEMPLOYEE ID:%d",s.empid);
	printf("\nEMPLOYEE NAME:%s",s.name);
	printf("\nEMPLOYEE SALARY:%f",s.salary);
	return 0;
	}

