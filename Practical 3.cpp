#include<stdio.h>
#include<string.h>
#define max 50
int top=-1;
int stack[max];

void push(int item){
	stack[++top]=item;
}

int pop(){
	return stack[top--];
}

int main(){
	char str[50];
	printf("Enter a String: ");
	gets(str);
	
	int i;
	
	for(i=0;i<strlen(str);i++)
		push(str[i]);
		
	printf("\nReversed String: ");
	for(i=0;i<strlen(str);i++)
		printf("%c",pop());
	
	return 0;
}
