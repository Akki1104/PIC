#include<stdio.h>
struct student
{
	int marks[5];
	int subTotal;
	int studTotal;
};
int main()
{
	int n;
	printf("Enter number of Students: ");
	scanf("%d",&n);
	struct student s[n];
	struct student t[5];
	int i,j,k;
	int total=0;
	for(i=0;i<n;i++)
	{
		s[i].studTotal=0;
		printf("Enter Student %d Marks\n",i+1);
		for(j=0;j<5;j++)
		{
			printf("Subject %d: ",j+1);
			scanf("%d",&s[i].marks[j]);
			s[i].studTotal=s[i].studTotal+s[i].marks[j];
		}
		total=total+s[i].studTotal;
	}
	for(k=0;k<5;k++)
		{  
		   t[k].subTotal=0;
		   for(j=0;j<n;j++)
		   {
		      t[k].subTotal=t[k].subTotal+s[j].marks[k];
		   }
	    }
	printf("Subject wise Total:\n");
	for(i=0;i<5;i++)
	 printf("Subject %d: %d\n",i+1,t[i].subTotal);
	printf("Student wise Total:\n");
	for(i=0;i<n;i++)
	 printf("Student %d: %d\n",i+1,s[i].studTotal);
	printf("The Grand Total of whole class is: %d",total);
	 return 0;
}
