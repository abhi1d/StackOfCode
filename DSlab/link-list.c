#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *link;
};
struct node *head = NULL;

// Add element in the beginning
void add() {
	struct node *temp;
	int d;
	temp = (struct node*)malloc(sizeof(struct node));
	printf("\nEnter data: ");
	scanf("%d", &d);
	temp->data = d;
	temp->link = head;
	head = temp;
}

// Insert in between
void insert() {
	int d, l, i;
	printf("\nEnter data and location: ");
	scanf("%d%d", &d, &l);
	
	struct node *temp1;
	temp1 = head;
	
	for(i=1; i<l; i++)
}

// Add element in the end
void end() {
	struct node *temp1;
	struct node *new;
	
	int d;
	printf("\nEnter data: ");
	scanf("%d", &d);
	
	new = (struct node*)malloc(sizeof(struct node));
	new->data = d;
	
	temp1 = head;
	while(temp1->link != NULL) {
		temp1 = temp1->link;
	}
	
	temp1->link = new;
	new->link = NULL;
}

// Traversing
void traverse() {
	struct node *temp1;
	temp1 = head;
	while(temp1 != NULL) {
		printf("%d ", temp1->data);
		temp1 = temp1->link;
	}
	printf("\n");
}

int main() {
	int c = 1;
	while(c==1 || c==2 || c==3) {
		puts("\nEnter your choice:\n1.Add element in beginning\n2.Traverse\n3.Add element in end\n4.Exit");
		scanf("%d", &c);
		if(c==1)
			add();
		else if(c==2)
			traverse();
		else if(c==3)
			end();
		else
			break;
	}
}
