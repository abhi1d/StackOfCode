#include<stdio.h>
#define SIZE 50
int queue[SIZE];
int front=-1;
int rear=-1;
int main()
{
	int choice;
	while(1)
	{
		printf("\nEnter 1 for insertion\n");
        printf("Enter 2 for deletion\n");
		printf("Enter 3 for Display \n");
			scanf("%d",&choice);
			switch(choice)
			{
				case 1:
					insert();
					break;
				case 2:
				   delete();
				   break;
				case 3:
					display();
					break;
				default:
				  printf("\nwrong choice");		
				   	
			}	
	}
}
insert()
{
    int data;
    if (rear == SIZE - 1)
    printf("Queue Overflow \n");
    else
    {
        if (front == - 1)
	    front = 0;
	    
        printf("Inset the element in queue : ");
        scanf("%d", &data);
        rear = rear + 1;
        queue[rear] = data;
    }
} 
 delete()
{
	if(front==-1 || front>rear )
	 printf("\nQueue uderflow");
	else
	{

		printf("\n\ndeleted element is  :  %d",queue[front]);
		front=front+1;
	} 
	
}
display()
{
	int i;
	if(front==-1)
	 printf("queue is empty");
	 else
	 {
	 	printf("queue is :\t");
	  for(i=front;i<=rear;i++)
	  {
	  	printf("%d\t",queue[i]);
	  }	
	 
	 }
	  printf("\n");
}
