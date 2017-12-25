#include <stdio.h>

//creaeting stack
struct stack
{
	int data;
	struct stack *next;
};

//declaring the function
struct stack *top = NULL;
struct stack push(struct stack *,int);
struct stack pop(struct stack *);
struct stack display(struct stack *);

//declaring the variable 
#define MAX 4
int stk[MAX];
int value,num,ch;

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
			top = push(top,num);
			break;

			case 2: 
			printf("Yoo are in pop section :\n");
			top = pop(top);
			
			case 3 :
			printf("Now we are displaying the stack value  \n");
			top = display(top);
			break;

			default:
			printf("Entered selection is wrong \n");
		}
	}while(ch != 5);
	return 0;	

}

//inserting the elemrnts
struct stack *push(struct stack *top,int value){
	struct stack *ptr;
	ptr = (struct stack*)malloc(sizeof(struct stack));
	ptr -> data = value;
	if (top == NULL)
	{
		ptr -> next = NULL;
		top -> ptr;
	}else{
		ptr -> next = top;
		top = ptr	
	}
	return top;
}

/*
//pick out the element from stack(decrease the stack value) 
struct stack *pop(struct stack *top){
	if (top == NULL)
	{
		printf("Stack is empty\n");
	}else{

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
*/