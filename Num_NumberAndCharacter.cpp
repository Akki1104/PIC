#include<stdio.h>
main()
{
	char str[10];
	printf("Enter any String consists of numbers and characters: ");
	gets(str);
	int num=0,count=0,ch=0;
	while(str[count]!='\0')
	{
		if((str[count]>=65&&str[count]<=90)||(str[count]>=97&&str[count]<=122))
		  ch++;
		else
		  num++;
		count++;
	}
	printf("Number of Integers in the entered String is: %d\n",num);
    printf("Number of Characters in the entered String is: %d",ch);	
}
