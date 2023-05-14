#include<stdio.h>
#include<stdlib.h>
main()
{
	char *ptr;
	printf("Enter a String: ");
	ptr=(char*)malloc(10*sizeof(char));
	gets(ptr);
	printf("You entered a String: ");
	printf("%s",ptr);
	ptr=(char*)realloc(ptr,30*sizeof(char));
	printf("\nEnter a larger String: ");
	gets(ptr);
	printf("You entered a larger String: ");
	printf("%s",ptr);
}
