 #include<stdio.h>
 struct student{
 	int roll;
 	char name[29];
 	struct dob{
 		int day,month,year;
	 }d;
 };
 int main(){
 	struct student s;
 	printf("ENTR ROLL NUMBER:\n");
 	scanf("%d",&s.roll);
 	printf("ENTER STUDENT NAME:");
 	scanf("%[^\n]s",&s.name);
 	printf("ENTER DOB IN (DD/MM/YY):");
 	scanf("%d %d %d",&s.d.day,&s.d.month,&s.d.year);
 	printf("\n STUDENT ROLL NUMBER:%d\n STUDENT NAME:%s\nSTUDENT DOB:%d/%d/%d",s.roll,s.name,s.d.day,s.d.month,s.d.year);
 	return 0;
 }
