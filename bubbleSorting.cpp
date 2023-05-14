#include<stdio.h>
void bubbleSort(int arr[],int size){
	for(int i=0;i<size;i++)
	{
		int temp=0;
		for(int j=0;j<size-i-1;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
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
	bubbleSort(arr,n);
	printf("\n\nElements After sorting \n\n");
	for(int i=0;i<n;i++)
		printf("%d\t",arr[i]);
}
