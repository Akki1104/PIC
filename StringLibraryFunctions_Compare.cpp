#include<stdio.h>
#include<string.h>
main()
{
	char str[10],str1[10];
	printf("Enter a String: ");
	gets(str);
	printf("Enter a second String: ");
	gets(str1);
	printf("%d",stricmp(str,str1));
}
