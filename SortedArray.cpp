#include<stdio.h>
int n,i,j;
void sort(int a[]);
main()
{
	printf("Enter the size of Array: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter Integers in Array:\n");
	for(i=0;i<n;i++)
	  scanf("%d",&arr[i]);
	sort(arr);
}
void sort(int a[])
{
	int temp;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>=a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("The Sorted order oder of Array of Integers is: ");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
}
