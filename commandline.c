							//command line arguments
#include<stdio.h>
#include<stdlib.h>//for including atoi
int main(int argc,char *argv[]){//argc stores n inputs,argv stores address of that inputs argv[0] always stores name of the program
	if(argc!=5){
		printf("\n usage:%s<name><marks1><marks2><marks3>",argv[0]);//usage programming word
		return 1;}
		char *name=argv[1];//optional
		int m1=atoi(argv[2]);//for 1st sub marks, stores adress of m1		atoi is used to convert string into int
		int m2=atoi(argv[3]);
		int m3=atoi(argv[4]);
		int total=m1+m2+m3;
		printf("\n NAME OF THE PROGRAM:%s",argv[0]);
		printf("\nSTUDENT NAME:%s",argv[1]);
		printf("\n%d \n%d \n%d",m1,m2,m3);
		printf("\ntotal marks:%d",total);
		
}
