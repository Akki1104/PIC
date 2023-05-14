#include <stdio.h>
#include<stdlib.h>
#include<conio.h>
#define MAX 10
 
void insert();
void deletes();
void display();
int queue_array[MAX];
int rear = - 1;
int front = - 1;
int main()
{
    int choice;
    while (1)
    {
        printf("1.Insert element to queue \n");
        printf("2.Delete element from queue \n");
        printf("3.Display all elements of queue \n");
        printf("4.Quit \n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
            	insert();
            break;
            case 2:
            	deletes();
            break;
            case 3:
           		display();
            break;
            case 4:
            	printf("Exiting the operation......");
            	exit(1);
            default:
            printf("Wrong choice \n");
        }
        getch();
		printf("\n");
		system("CLS"); 
    }
    return 0;
}
 
void insert()
{
    int add_item;   
    if (rear == MAX - 1)
    	printf("Queue Overflow \n");
    else
    {
        if (front == - 1)
        	front = 0;
        printf("Inset the element in queue : ");
        scanf("%d", &add_item);
        rear = rear + 1;
        queue_array[rear] = add_item;
    }
}
 
void deletes()
{
    if (front == - 1 || front > MAX)
    {
        printf("Queue Underflow \n");
        front=-1;
        rear=-1;
        return ;
    }
    else
    {
        printf("Element deleted from queue is : %d\n", queue_array[front]);
        front = front + 1;
        if(front==MAX)
        	front=-1;
    }
}
 
void display()
{
    int i;
    if (front == - 1||front>rear)
    {
        printf("Queue is empty \n");
        front=-1;
        rear=-1;
	}
	else
    {
        printf("Queue is : ");
        for (i = front; i <= MAX-1; i++)
            printf("%d ", queue_array[i]);
        printf("\n");
    }
}
