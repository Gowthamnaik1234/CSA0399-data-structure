#include<stdio.h>
#include<stdlib.h>
#define size 50
int a[size],x,top=-1,rear=-1,i;
void insert();
void dequeue();
void display();
int main()
{
	int choice;
	while(1)
	{
	
	printf("queue operations\n");
	printf("\n 1.insertan element\n2.delete an element\n3.display element\n4.exit\n");
	scanf("%d",&choice);
	switch(choice)
	{
	
	case 1:insert();
	break;
	case 2:dequeue();
	break;
	case 3:display();
	break;
	case 4:exit(0);
	default:printf("wrong choice");
    }
    }  
}
void insert()
{

	if(rear==size-1)
	{
		printf("underflow");
	}
	else
	{
		int front;
		if(front==-1)
    	front=0;
		printf("enter an element to insert");
		scanf("%d",&x);
		rear=rear+1;
		a[rear]=x;
}
}
void dequeue()
{
	int front;
	if(front==-1 || front>rear)
	{
		printf("underflow");
	}
	else
	{
	
		printf("element deleted from queue is %d",a[front]);
		front=front+1;
	}
}
void display()
{
	int front;
	if(front==-1)
	printf("queue is empty");
	else
	printf("the elements of queue\n ");
	for(i=front;i<=rear;i++)
	printf("%d\n",a[i]);
}
