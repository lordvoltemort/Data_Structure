#include <stdio.h>

//delaring the function
int pop();
int push(int );
int top = -1;
int stk[50],val;

int main()
{
	//creating array
	int count;
	
	//getting size of array
	printf("Enter size of array : \n");
	scanf("%d",&count);
	int arr[count];
	//taking n input from user
	printf("Enter the elements of array : \n");
	for (int i = 0; i < count; i++)
	{
		scanf("%d",&arr[i]);
	}
	for (int i = 0; i < count; i++)
	{
		push(arr[i]); 
		/*printf("values are : %d \t",arr[i] );
		printf("\n");*/
	}

	for (int i = 0; i < count; i++)
	{
//		printf("The first value is : %d\n",val );
		val = pop();
		arr[i] = val;
		/*printf("values are : %d \t",arr[i] );
		printf("\n");*/
	}

	printf("Reverse order is : ");
	for (int i = 0; i < count; i++)
	{
		printf("%d\t",arr[i] );
		printf("\n");
	}
	
	return 0;
}

int push(int val){
	stk[top] = val;
	top++;
}

int pop(){
	printf("value in pop function : %d\n", stk[top]);
	return (stk[top--]);
}