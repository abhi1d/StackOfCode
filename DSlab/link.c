#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *link;
};
struct node *head = NULL;

// Length of Link list
int len() {
    int l = 0;
    struct node *temp1;
	temp1 = head;
	while(temp1 != NULL) {
		l++;
		temp1 = temp1->link;
	}
	return l;
}

// Insert an element
void insert() {
    int l, d, i;
    printf("\nEnter data and location: ");
	scanf("%d%d", &d, &l);
	l--;
    
    struct node *new, *temp;
    new = (struct node*)malloc(sizeof(struct node));
    new->data = d;
    temp = head;
    
    if(l==0) {
        new->link = head;
        head = new;
    }
    else if(l==len()) {
	    while(temp->link != NULL) {
		    temp = temp->link;
	    }
        temp->link = new;
	    new->link = NULL;
	}
	else {
	    struct node *temp1;
	    temp1 = head;
	    for(i=0; i<l-1; i++) {
	        temp = temp->link;
	        temp1 = temp1->link;
	    }
	    temp1 = temp1->link;
        temp->link = new;
        new->link = temp1;
    }
}

// Delete an element
void delete() {
    int l, i;
    printf("\nEnter the element number to be deleted: ");
	scanf("%d", &l);
	l--;
	
	struct node *temp;
    temp = head;
    
    if(l==0) {
        head = temp->link;
    }
    else if(l==len()) {
        struct node *temp1 = temp->link;
	    while(temp1->link != NULL) {
		    temp = temp->link;
	    }
        temp->link = NULL;
	}
	else {
	    struct node *temp1;
	    temp1 = head;
	    for(i=0; i<l-1; i++) {
	        temp = temp->link;
	        temp1 = temp1->link;
	    }
	    temp1 = temp1->link;
        temp->link = temp1->link;
        temp1->link = NULL;
	}
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
		puts("\nEnter your choice:\n1.Add element\n2.Traverse\n3.Delete\n4.Exit");
		scanf("%d", &c);
		if(c==1)
			insert();
		else if(c==2)
			traverse();
		else if(c==3)
		    delete();
		else
			break;
	}
}
