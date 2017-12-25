#include <stdio.h>

	int INFO[20];
	int LINK[20];
	int START;
	int SEARCH(int);

int main(){
	int PTR,ITEM,LOC;
	
	INFO[0] = 22;	INFO[2] = 5;	INFO[3] = 19;
	INFO[5] = 87;	INFO[7] = 29;	INFO[8] = 79;
	INFO[9] = 33;	INFO[11] = 2;	INFO[13] = 5;
	INFO[14] = 8;	INFO[16] = 55;	INFO[18] = 99;


	LINK[0] = 3;	LINK[2] = 13;	LINK[3] = 2;
	LINK[5] = 8;	LINK[7] = 14;	LINK[8] = 9;
	LINK[9] = 18;	LINK[11] = 16;	LINK[13] = 5;
	LINK[14] = -1;	LINK[16] = 0;	LINK[18] = 7;

	START = 11;

	PTR = START;

	printf("LIST : \n");

	while(PTR != -1){
		printf("%d \t",INFO[PTR] );
		PTR = LINK[PTR];
	}

	printf("\n\n Enter item to be4 search");
	scanf("%d",&ITEM);

	LOC = SEARCH(ITEM);

	if (LOC == -1)
	{
		printf("\n Item is not present in list");

	}else{
		printf("\n Item %d present at index location %d in the lsit",ITEM,LOC);
	}

}

int SEARCH(int I){

	int P = START;
	int L = -1;
	while(P != -1){
		if (I == INFO[P])
		{
			L = P;
			break;
		}else{
			P = LINK[P];
		}
		return(L);
	}
}
