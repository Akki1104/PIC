#include <stdio.h>

// Merge two subarrays L and M into arr
void merge(int arr[], int p, int q, int r) {

  // Create L ? A[p..q] and M ? A[q+1..r]
  int n1 = q - p + 1;
  int n2 = r - q;

  int l[n1], m[n2];

  for (int i = 0; i < n1; i++)
    l[i] = arr[p + i];
  for (int j = 0; j < n2; j++)
    m[j] = arr[q + 1 + j];

  // Maintain current index of sub-arrays and main array
  int i, j, k;
  i = 0;
  j = 0;
  k = p;

  // Until we reach either end of either L or M, pick larger among
  // elements L and M and place them in the correct position at A[p..r]
  while (i < n1 && j < n2) {
    if (l[i] <= m[j]) {
      arr[k] = l[i];
      i++;
    } else {
      arr[k] = m[j];
      j++;
    }
    k++;
  }

  // When we run out of elements in either L or M,
  // pick up the remaining elements and put in A[p..r]
  while (i < n1) {
    arr[k] = l[i];
    i++;
    k++;
  }

  while (j < n2) {
    arr[k] = m[j];
    j++;
    k++;
  }
}

// Divide the array into two subarrays, sort them and merge them
void sort(int arr[], int l, int r) {
  if (l < r) {

    // m is the point where the array is divided into two subarrays
    int m = l + (r - l) / 2;

    sort(arr, l, m);
    sort(arr, m + 1, r);

    // Merge the sorted subarrays
    merge(arr, l, m, r);
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
