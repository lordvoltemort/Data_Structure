/* Defineing array in c */\

#include <stdio.h>
void printaray(int a[]);
int main()
{
	int a[10];
	int i;
	for (i = 0; i < 10; i++)
	{
		a[i] = i;
	}
	printaray(a);

	return 0;
}

void printaray(int a[]){

	int i;
	for (i = 0; i < 10; ++i)
	{
		printf("Value of array is :  %d\n",a[i] );
	}
}