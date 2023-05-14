#include<stdio.h>

int sort(int a[],int n){
	int i,j,temp;
	for(i=0;i<n;i++){
		temp=a[i];
		for(j=i-1;j>=0;j--){
			if(temp<a[j])
				a[j+1]=a[j];
			else
			break;
		}
		a[j+1]=temp;
	}
	return a[n];
}

int main(){
	int n;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	
	int a[n];
	printf("Enter %d unsorted elements:\n",n);
	int i;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	a[n]=sort(a,n);
	printf("\nSorted Array List is: ");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	return 0;
}
