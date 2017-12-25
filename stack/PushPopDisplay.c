#include <stdio.h>

//declaring the variable 
#define MAX 4
int stk[MAX];
int value,top = -1,num,ch;

//declaring the function
int pop(int stk[]);
int push(int stk[],int num);
int peek();
void display(int stk[]);

//starting of the main function
int main()
{
	printf("\n Select your from given below \n");
	printf("**************************************\n");
	printf("1.For push\n");
	printf("2.For pop\n");
	printf("3.For Display\n");
	printf("5.For Exit\n");
	printf("**************************************\n");
	do{
		printf("Enter your choice : \n");
		scanf("%d",&ch);

		switch(ch){

			case 1 : 
			printf("Enter number to be pushed : \n");
			scanf("%d",&num);
			push(stk,num);
			break;

			case 2: 
			printf("Yoo are in pop section :\n");
			value = pop(stk);
			if (value != -1)
			{
				printf("The value deleted \n");
			}
			pop(stk);
			break;

			case 3 :
			printf("Now we are displaying the stack value  \n");
			display(stk);
			break;

			default:
			printf("Entered selection is wrong \n");
		}
	}while(ch != 5);
	return 0;	

}

//inserting the elemrnts
int push(int stk[],int value){
	if (top == MAX-1 )
	{
		printf("Stack is full\n");
	}
	else{
		top++;
		stk[top] = value;
		return value;
	}
}

//pick out the element from stack(decrease the stack value) 
int pop(int stk[]){
	if (top == -1	)
	{
		printf("stack is empty");

	}else{
		value = stk[top];
		top--;
		return value;
	}
}

//displaying the stack
void display(int stk[]){
	if (top == -1)
	{
		printf("stack is empty \n");	
	}else{
		printf("I am in display section \n");
		int i,count;
		for (i = 0; i < MAX; i++)
		{
			printf("Values of stacks are : \n");
			printf("%d\n",stk[i]);
		}
	}	
}
