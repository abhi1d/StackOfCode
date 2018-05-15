#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
struct node1{
   	int data1;
   	struct node1 *link1;
   };
int main()
{
	struct node{
		int data;
		struct node *link; 
	};
	typedef struct node NODE;  //we can assign struct node to NODE
	NODE  *first,*head,*temp=0;//we can use NULL also
   first=0;
   int choice=1,count=0; 
   while(choice)
   {
   	head=(NODE *)malloc(sizeof(NODE));
   	printf("enter the items in the list : \t");
   	scanf("%d",&head->data);
   	if(first!=0)
   	{
   		temp->link=head;
   		temp=head;
   		
   	}
   	else
	{
   	 first=temp=head;	
   	}
   	printf("if you want to add another element in link list then  press :  1 \n for no option  press :  0 \n");
   	scanf("%d",&choice);
   }
   temp->link=NULL;
   printf("this linked list is :  \n");
   temp=first;
   
   while(temp!=NULL)
   {
   	printf("%d \t",temp->data);
   	temp=temp->link;
   	count++;
   }  
   printf("\nthe total nodes is :  %d\n",count);
   count=0;
   
   
   typedef struct node1 NODE1;
   NODE1 *x=NULL,*y;
   y=(NODE1*)malloc(sizeof(NODE1));
   scanf("%d",&y->data1);
   x->link1=y;
   x=y;
   x->link1=NULL;
   
   printf("%d",x->data1);
   while(temp!=NULL)
   {
   	if((temp->data)==(x->data1))
   	 printf("the location of the element is :  %d",count);
   	else
	 count++;
	 temp=temp->link;
   	 
   }
   
   
   
}
