#include <stdio.h>

int main(void) {
	int i,j,k;
	printf("enter the numbers \n");
	scanf("%d",&i);
	j=i;
	k=0;
	while(j!=1)
	{
	if(j%2!=0)
	{
		k=1;
		break;
	}
	j=j/2;
	}
	if(k==0)
	printf("yes");
	else
	printf("no");
	return 0;
}
