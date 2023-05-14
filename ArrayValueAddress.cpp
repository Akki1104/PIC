#include<stdio.h>
int main()
{
	int a[10],*a1=a,i;
	printf("Enter 10 values to Array:\n");
	for(i=0;i<10;i++)
	 scanf("%d",&a[i]);
	printf("Entered Values:\n");
	for(i=0;i<10;i++)
	{
		printf("%d\n",*a1);
		a1++;
	}
	return 0;
}
