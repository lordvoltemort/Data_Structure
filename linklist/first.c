//A simple C program to introduced a link list
#include <stdio.h>
#include <stdlib.h>

struct Node
{
	int data;
	struct Node *next;
};

int main()
{
	//program to create a simple linklist with  nodes
	struct Node* head = NULL;
	struct Node* second = NULL;
	struct Node* third = NULL;

	//allocated 3 nodes in the heap
	head = (struct Node*)malloc(sizeof(struct Node));
	second = (struct Node*)malloc(sizeof(struct Node));
	third = (struct Node*)malloc(sizeof(struct Node));

	head->data = 1;
	head->next = second;

	second->data = 2;
	second->next = third;

	third->data = 3;
	third->next = NULL;

	printList(head);
	return 0;
}