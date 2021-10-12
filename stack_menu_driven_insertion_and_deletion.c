//Menu driven program for implementing stack using array
#include <stdio.h>

struct Stack    //creating a stcak datatype using struct
{
	int top;
	int arr[10];
};

struct Stack stk;
void initstk(struct Stack stk)
{
	stk.top=-1;
	stk.arr[10];
}

void isfull()
{
	if (stk.top==9)
		printf("Stack is full!");
	else 
		printf("Stack is not full yet!");
}

void isempty()
{
	if (stk.top==-1)
		printf("Stack is empty!");
	else 
		printf("Stack has some elements!");
}

void push(int val)
{
	printf("Enter the number to be inserted in the stack:");
	scanf("%d",&val);
	if (stk.top==9)
	{
		printf("Stack is full :(");
	}
	else
	{
		stk.top=stk.top+1;
		stk.arr[stk.top]=val;
		printf("Inserted element %d at index %d.",val, stk.top-1);
	}
}

int pop()
{	
    int val;
	if (stk.top==-1)
	{
		printf("The stack is empty :(");
		return 0;
	}
	else
	{
		val=stk.arr[stk.top];
		stk.top=stk.top-1;
		printf("Removed element %d from index %d!!!",val,stk.top+1);
		return val;
	}
}

int top()
{
	int val;
	val=stk.arr[stk.top];
	printf("The number in the pointer top is %d.",val);
	return val;
}

int main()
{
	int x,y;
	int n=0;
	printf("_________________Lets vizualise teh basic stack functions :)_______________________________");
	printf("\nEnter the right key to activate yor choosen function :-[]");
	printf("\npress 1 for push()\npress 2 for pop()\npress 3 for top()\npress 4 for isempty()\npress 5 for isfull()\n");
	
    while (n<10)
    {	
		printf("\n\nEnter the choice:");
		scanf("%d",&y);
		
    	switch(y)
		{
			case 1: push(x);
				break;
			
			case 2: pop();
				break;
			
			case 3: top();
				break;
			
			case 4: isempty();
				break;
			
			case 5: isfull();
				break;		
		} 
		n=n+1;	
	}
}
