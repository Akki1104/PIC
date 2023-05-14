#include<stdio.h>
#include<string.h>
int main()
{
   int i,j,n;
   char str[100][100],temp[100];
   printf("Enter number of names :");
   scanf("%d",&n);
   printf("Enter names in any order:\n");
   for(i=0;i<=n;i++)
   {
      gets(str[i]);
   }
   for(i=0;i<=n;i++)
   {
      for(j=i+1;j<=n;j++)
	  {
         if(strcmpi(str[i],str[j])>0)
		 {
            strcpy(temp,str[i]);
            strcpy(str[i],str[j]);
            strcpy(str[j],temp);
         }
      }
   }
   printf("\nThe sorted order of names are:");
   for(i=0;i<=n;i++)
   {
      printf("%s\n",str[i]);
   }
   return 0;
}
