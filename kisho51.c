#include <stdio.h>

int main(void) {
	int i,j,k;
	printf("enter the number \n");
	scanf("%d",&i);
	j=i;
	while(j)
	{
		j=j/10;
		k=k*10;
	}
	printf("the digits are");
	while(k>1)
	{
		k=k/10;
		printf("%d",i/k);
		i=i%k;
	}
	return 0;
}
