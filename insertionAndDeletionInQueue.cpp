#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define MAX 10
int queue[MAX];
int rear=-1;
int front=-1;
void insert(int );
int del();
void display();
int main(){
	int choice,item;
	while(1){
		printf("1.Insertion\n");
		printf("2. Delete\n");
		printf("3.Display all element\n");
		printf("4.exit\n");
		printf("Enter your choice : ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Input the element for adding in queue : ");
				scanf("%d",&item);
				insert(item);
				break;
			case 2:
				item = del();
				printf("Deleted element is %d.",item);
				break;
			case 3:
				display();
				break;
			case 4:
				printf("Exiting from the program.................");
				exit(0);
				break;
			default : 
				printf("Invalid Choice.......");
		}
		printf("\n\n\nPress Enter any key to continue..........\n");
		getch();
		system("CLS");
	}
}
void insert(int item){
	if(rear==MAX-1)
		printf("Queue Overflow");
	else{
	if(front == -1 )
		front = 0;
	rear=rear+1;
	queue[rear]=item;
	}
}
int del(){
	int item;
	if(front==-1 || front==rear-1)
		printf("Queue Underflow.");
	else{
		item=queue[front];
		front=front+1;
		return item;
	}
}
void display(){
	int i;
	if(front==-1 || front==rear+1)
		printf("Queue is Empty.");
	else{
		printf("Queue is :\n\n");
		for(i=front;i<=rear;i++)
			printf("%d\n",queue[i]);
		printf("\n\n");
	}
}
