#include <stdio.h>
int main()
{
	int arr[60];

	for (int i = 1; i <= 10; i++)
	{
		arr[i] = i;
	}
	
	for (int i = 1; i <= 10; i++)
	{
		//printf("%d\n",arr[i] );
		printf("Year is :  %d\n",arr[i] + 2000 );	
	}

	return 0;
}