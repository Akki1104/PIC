#include<stdio.h>

void binarySearch(int a[],int n,int x){
	int f=0,l=n-1,mid,flag=0;
	while(f<=l){
		mid=(f+l)/2;
		if(a[mid]>x)
			l=mid-1;
		else if(a[mid]<x)
			f=mid+1;
		else{
			flag=1;
			break;
		}
	}
	
	if(flag==1)
		printf("%d is found at %d place in the array list.",x,mid+1);
	else
		printf("%d is not found in the array list.",x);
}

int main(){
	int n;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	
	int a[n];
	printf("Enter elements in array list: \n");
	int i;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	int x;
	printf("Enter the element you want to search: ");
	scanf("%d",&x);
	
	binarySearch(a,n,x);
}
