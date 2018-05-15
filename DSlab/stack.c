# include <stdio.h>
# define SIZE 5

void push(int);
int pop();

int stack[SIZE];
int top;

void push(int data) {
	if(top ==SIZE-1 ) {
		puts("stack is full");
	}
	else {

		stack[top] = data;
		top++;
	}
}

int pop() {
	int x;
	if(top==-1) {
		puts("stack is empty");
		return -1;
	}
	else {
	 return stack[top--];
	}
}

void print() {
	int i;
	if(top==-1)
		puts("\nstack is empty");
	else {
		puts("\nThe queue is: ");
		for(i=0; i<=top; i++)
				printf("%d",stack[i]);
		puts("");
	}
}

int main() {
	int choice;

	 top = -1;
	choice = 1;
	int i;
       do{
		puts("\nEnter your choice:\nInsert - 1\nDelete - 2\nPrint Queue - 3\nExit - 4");
		scanf("%d", &choice);
		if(choice == 1) {
			puts("\nEnter the number to be inserted:");
			scanf("%d", &i);
			push(i);
		}
		else if(choice == 2) {
			i = pop();
			if(i != -1)
				printf("Number removed: %d\n", i);
		}
		else if(choice == 3)
			print();
	}while(choice == 1 || choice == 2 || choice == 3);
}
