#include <stdio.h>
// function to find the partition position
int partition(int arr[], int low, int high) {
  // select the rightmost element as pivot
  int pivot = arr[high];
  // pointer for greater element
  int i = (low - 1);
  // traverse each element of the array
  // compare them with the pivot
  int temp;
  for (int j = low; j < high; j++) {
    if (arr[j] <= pivot) {
      // if element smaller than pivot is found
      // swap it with the greater element pointed by i
      i++;
      // swap element at i with element at j
      temp=arr[i];
      arr[i]=arr[j];
      arr[j]=temp;
    }
  }
  // swap the pivot element with the greater element at i
  temp=arr[i+1];
  arr[i+1]=arr[high];
  arr[high]=temp;
  // return the partition point
  return (i + 1);
}

void sort(int arr[], int low, int high) {
  if (low < high) {
    
    // find the pivot element such that
    // elements smaller than pivot are on left of pivot
    // elements greater than pivot are on right of pivot
    int pi = partition(arr, low, high);
    
    // recursive call on the left of pivot
    sort(arr, low, pi - 1);
    
    // recursive call on the right of pivot
    sort(arr, pi + 1, high);
  }
}

int main(){
  int n;
  printf("Enter the size of array: ");
  scanf("%d",&n);
  int a[n],i;
  printf("Enter %d unsorted elements:\n",n);
  for(i=0;i<n;i++)
  	scanf("%d",&a[i]);
  	
  sort(a,0,n-1);
  
  printf("Sorted Array List is: ");
  for (i=0;i<n;i++)
    printf("%d  ",a[i]);
}
