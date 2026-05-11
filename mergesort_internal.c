#include<stdio.h>
void merge(int a[],int low,int mid,int high){
	int i=low,k=0,j=mid+1,temp[high-low+1];
	while(i<=mid&&j<=high){
		if (a[i]<=a[j]){
		temp[k]=a[i];
		i++;
		k++;
		}
		else{
			temp[k]=a[j];
			j++;
			k++;
		}
	}
	if(j>high){
		while(i<=mid){
			temp[k]=a[i];
			i++;
			k++;
		}
	}
	else{
		while(j<=high){
			temp[k]=a[j];
			j++;
			k++;
		}
	}
	for(i=low,k=0;i<=high;i++,k++){
		a[i]=temp[k];
	}
}
void mergesort(int a[],int low,int high){
	int mid;
	if(low<high){
		mid=(low+high)/2;
	 mergesort(a,low,mid);
	 mergesort(a,mid+1,high);
	 merge(a,low,mid,high);
	}
}
int main(){
	int i,n;
	printf("\nENTER N VALUE:");
	scanf("%d",&n);
	int a[n];
	printf("ENTER %d ELEMENTS:",n);
	for(i=0;i<n;i++){
	scanf("%d",&a[i]);
	}
	mergesort(a,0,n-1);
	printf("\nAFTER SORTING:");
	for(i=0;i<n;i++){
		printf("\t%d",a[i]);
	}
	return 0;
}
