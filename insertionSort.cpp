#include<stdio.h>
void insertionSort(int arr[],int size){
	for(int i=1;i<size;i++){
		int key=arr[i];
		int j=i-1;
		while(key<arr[j] && j>=0){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
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
	insertionSort(arr,n);
	printf("\n\nElements After sorting \n\n");
	for(int i=0;i<n;i++)
		printf("%d\t",arr[i]);
}
