//Traversing in linera array 

#include <stdio.h>
#define N 7 /*lower bound is 1 and upper bound is N*/

int main()
{
	int k=0,i;
	int LA[N] = {23,45,56,1,-9,-12,123};
	/*while(k<=N){
		k++;
	}*/
	for (int i = 0; i < N; ++i)
	{
		printf("\n%d",LA[i]);
	}
	return 0;
}
