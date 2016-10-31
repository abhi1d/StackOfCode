#include<stdio.h>
#define N 10
int circular_queue[N];
int front=-1;
int rear=-1;
int main()
{
	int choice;
	while(1)
	{
		printf("\nEnter 1 for insertion in circular queue\n");
        printf("Enter 2 for deletion in circular queue\n");
		printf("Enter 3 for Display in circular queue \n");
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
	rear=(rear+1)%N;
	if(front==rear)
	  printf("overflow circular queue");
	else
	{
		if (front == - 1)
	    front = 0;
	    
        printf("Inset the element in circular queue : ");
        scanf("%d", &data);
      circular_queue[rear] = data;
	}  
}
delete()
{
	if(front==-1)
     printf("underflow condition");
     else if(front==rear)
      {
      	front=-1;
      	rear=-1;
      }
      else if(front==N-1)
      {
      	printf("deleted data : %d",circular_queue[front]);
      	front=0;
      }
      else
      {
        printf("deleted data : %d",circular_queue[front]);
        front=front+1;
      }
 
}
display()
{
	int i;
	if(front==-1)
	 printf("circular_queue is empty");
	 else
	 {
	 	printf("circular_queue is :\t");
	  for(i=front;i<=rear;i++)
	  {
	  	printf("%d\t",circular_queue[i]);
	  }	
	 
	 }
	  printf("\n");
}

