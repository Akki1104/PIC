#include<stdio.h>

int sort(int a[],int n){
	int i,j,small,pos;
	for(i=0;i<n;i++){
		small=a[i];
		pos=i;
			for(j=i+1;j<n;j++){
				if(small>a[j]){
					small=a[j];
					pos=j;
				}	
			}
		small=a[i];
		a[i]=a[pos];
		a[pos]=small;
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
