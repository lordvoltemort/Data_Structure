#include <stdio.h>
#define UB 10

int array[UB] = {21,2,43,14,-5,46,87,8};
int insert_item(int LA[],int N,int K,int item);
int delete_item(int LA[],int N,int K);

int main()
{
	int ITEM,LOC;
	int i,size=8;
	int choice;

	printf("Array\n");
	for (int i = 0; i < size; i++)
		printf("%d",array[i] );

		printf("\n\n Enter your choice : \n\n 1.Insert an element \n2.Delete an element \n");
	scanf("%d",&choice);

	if (choice != 1 && choice != 2)
	{
		printf("\n Invalid choice\n");
		
	}else if (choice ==1)
	{
		printf("\n Enter the element to be inserted in array : ");
		scanf("%d",&ITEM);

		printf("\n Enter the location where element %d is to be inserted : ",ITEM);
		scanf("%d",&LOC);
		if (LOC<=size)
		{
			size = insert_item(array,size,LOC,ITEM);
		}else{
			printf("\nThe enterded loation is out of bound ");
			
		}
		printf("\nModifieed array : ");
		for (int i = 0; i < size; i++)
			printf("\n%d",array[i] );
	}
	else{
		printf("\nEntered the location from wherer you want to deleted : ");
		scanf("%d",&LOC);

		if (LOC<size)
		{
			size = delete_item(array,size,LOC);
		}else{
			printf("\nThe entered loation is out of bound : ");
			
		}
		printf("\nModified array : \n");
		for (int i = 0; i < size; i++)
		{
			printf("\n %d",array[i]);
		}
	}
	return 0;
}

int insert_item(int LA[],int N, int K ,int item){

	int j=N;
	while(j>=K-1){
		LA[j+1] = LA[j];
		j--;
	}
	LA[K-1] = item;
	return(N+1);
}

int delete_item(int LA[],int N,int k){
	int j,item;
	item = LA[k-1];
	printf("\nItem %d deleted from location %d \n",item,k);
	for (int i = 0; i < N-1; i++)
		LA[j] = LA[j+1];
	return(N-1);
}