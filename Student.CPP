	#include<stdio.h>
	struct student
	{
	   char name[10];
	   int regNo;
	   int mark[6];
	   int total;
	};
	main()
	{
	  int n;
	  printf("Enter the number of Students: ");
	  scanf("%d",&n);
	  struct student s[n];
	  int i,j;
	   for(i=0;i<n;i++)
	   {
	     printf("Enter Registration Number of Student %d: ",i+1);
	     scanf("%d",&s[i].regNo);
	     printf("Enter Name: ");
	     scanf("%s",s[i].name);
	     printf("Enter Marks:\n");
	     s[i].total=0;
	     for(j=0;j<6;j++)
	     {
	     	printf("Subject %d: ",j+1);	
		    scanf("%d",&s[i].mark[j]);
		    s[i].total=s[i].total+s[i].mark[j];
	     }
	   }
	   printf("Registration Number\tName\t\tTotal\n");
	   for(i=0;i<n;i++)
	   {
	     printf("%d\t\t\t%s\t\t%d\n",s[i].regNo,s[i].name,s[i].total);
	   }
	}
