#include<stdio.h>
int partition(int a[],int low,int high);
void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
//QUICKSORT_CODE
void quicksort(int a[],int low,int high){
	if(low<high){
	int location=partition(a,low,high);//ACTUAL ARGUMENTS
	quicksort(a,low,location-1);
	quicksort(a,location+1,high);
}}
//PARTITION_CODE
int partition(int a[],int low,int high){
	int pivot=a[low];
	int start=low,end=high;
	while(start<end){
		while(a[start]<=pivot){
			start++;
		}
		while(a[end]>pivot){
			end--;
		}
		if(start<end){
			swap(&a[start],&a[end]);
		}
	}
	swap(&a[low],&a[end]);
	return end;
}
int main(){
	int n,i;
	printf("ENTER SIZE OF N:");
	scanf("%d",&n);
	int a[n];
	printf("Enter %d elements:",n);
	for(i=0;i<n;i++){//used for printing elements in array
		scanf("%d",&a[i]);
	}
	quicksort(a,0,n-1);
	printf("\nAfter Sorting:");
	for(i=0;i<n;i++){
		printf("\t%d",a[i]);
	}
	return 0;
}
