#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define maxstk 10
void choice();
void push(int);
void pop();
void display();
int top=-1;
int stack[maxstk];
int main(){
	while(1){
		choice();
		printf("\n\n\n\nPress any key to continue..........");
		getch();
		system("CLS");
	}
}
void choice(){
	int n;
	printf("Which operation you want to do?\n");
		printf(" 1. Push\n");
		printf(" 2. Pop\n");
		printf(" 3. Display\n");
		printf(" 4. Exit\n");
		printf("Enter your choice: ");
		scanf("%d",&n);
		switch(n){
			case 1:
				int item;
				printf("\nEnter the number you want to insert: ");
				scanf("%d",&item);
			    push(item);
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				printf("\n-------------EXITING FROM THE PROGRAM-------------\n");
				exit(0);
				break;
			default:
				printf("\nINVALID CHOICE");
		}
} 
void push(int item){
	if(top>=maxstk)
		printf("\nSTACK OVERFLOW\n");
	else{
		stack[++top]=item;
		printf("\n%d is Pushed into the stack\n",item);
    }
}
void pop(){
	if(top<0)
		printf("\nSTACK UNDERFLOW\n");
	else
		printf("\n%d is Popped from the stack\n",stack[top--]);
}
void display(){
	printf("\nElements present in the stack are: \n");
	if(top<0)
	  printf("\t\tNULL!");
	else{
	for(int i=0;i<=top;i++)
		printf("%d\n",stack[i]);
    }
}
