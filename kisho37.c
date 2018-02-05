#include <stdio.h>

int main(void) {
	int i,j,t=0;
	printf("enter the first number:\n");
	scanf("%d",&i);
	printf("enter the second number:\n");
	scanf("%d",&j);
	t=i;
	i=j;
	j=t;
	printf("after swapping %d \n",i);
	printf("after swapping %d \n",j);
	return 0;
}
