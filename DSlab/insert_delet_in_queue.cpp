# include <stdio.h>
# define SIZE 5

void insert(int);
int delete();

int queue[SIZE];
int front;
int rear;

void insert(int data) {
	if((front==0 && rear==SIZE-1) || front-rear == 1) {
		puts("Queue is full");
	}
	else {
		if(front == -1) {
			front = rear = 0;
		}
		else {
			rear++;
		}
		queue[rear] = data;
	}
}

int delete() {
	int x;
	if(front==-1) {
		puts("Queue is empty");
		return -1;
	}
	else {
		x = queue[front];
		if(front==rear)
			front = rear = -1;
		else if(front==SIZE-1)
			front = 0;
		else
			front++;
		return(x);
	}
}

void print() {
	int i;
	if(front==-1)
		puts("\nQueue is empty");
	else {
		puts("\nThe queue is: ");
		for(i=front; i<=rear; i++) {
			if(i != rear)
				printf("%d, ", queue[i]);
			else
				printf("%d", queue[i]);
		}
		puts("");
	}
}

int main() {
	int choice;
	
	front = rear = -1;
	
	choice = 1;
	int i;
	while(choice == 1 || choice == 2 || choice == 3) {
		puts("\nEnter your choice:\nInsert - 1\nDelete - 2\nPrint Queue - 3\nExit - 4");
		scanf("%d", &choice);
		if(choice == 1) {
			puts("\nEnter the number to be inserted:");
			scanf("%d", &i);
			insert(i);	
		}
		else if(choice == 2) {
			i = delete();
			if(i != -1)
				printf("Number removed: %d\n", i);
		}
		else if(choice == 3)
			print();
	}
}
