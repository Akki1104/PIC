#include<stdio.h>
void selectionSort(int arr[],int size){
	int i=0,j=0,min;
	for(i=0;i<size-1;i++){
		min=i;
		int temp=0;
		for(j=i+1;j<size;j++){
			if(arr[j]<arr[min])
				min=j;
		}
		if(min!=i){
			temp=arr[i];
			arr[i]=arr[min];
			arr[min]=temp;
		}
	}
}
int main(){
	int n;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	int arr[n];
	printf("\n\nEnter the elements in the array \n\n");
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("\n\nElements Before Sorting \n\n");
	for(int i=0;i<n;i++)
		printf("%d\t",arr[i]);
	selectionSort(arr,n);
	printf("\n\nElements After sorting \n\n");
	for(int i=0;i<n;i++)
		printf("%d\t",arr[i]);
}
