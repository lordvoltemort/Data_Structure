#include <stdio.h>

struct traveler
{
	int class;
	char train_number[40];
	char coach_number[6];
	int seat_num;
	char from[30];
	char to[30];
	char gender[10];
	int age;
	int dep_date[10];
	char name[80];
};

struct traveler passenger8 = {
	.name = "Rahul Das",
	.to = "jaipur ",
	.from = "Kota",
	.train_number = " superfast 154 ",
	.dep_date[0] = 30,
	.dep_date[1] = 8,
	.dep_date[2] = 2010,
	.gender = "M",
	.age = 28,
	.class = 1
};

int main(){

	int i ;
	printf("\n enter coach number : ");
	scanf("%s",&passenger8.coach_number);
	printf("\n enter seat number : ");
	scanf("%d",&passenger8.seat_num);
	printf("\n xxxxxxx Ticket xxxxxxxxx");
	printf("\n\n\n\nName of ticket holder : %s",passenger8.name);
	printf("\n\n\n Train : %s : ",passenger8.train_number);
	printf("\n From : %s, Date of Departure : ",passenger8.from);
	for (i = 0; i < 3; i++)
	{
		printf("%d : ",passenger8.dep_date[i]);
		printf("\n\n To : %s ",passenger8.to);
		printf("\n\n Coach No : %s Seat No :%d ",passenger8.coach_number,passenger8.seat_num);
		printf("\n\n\n xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx \n");
	}
	return 0;
}