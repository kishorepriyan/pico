#include <stdio.h>

int main(void) {
	int j,t=0;
	printf("enter the number \n");
	scanf("%d",&j);
	while(j!=0)
	{
		j=j/10;
		++t;
	}
	printf("the digit is %d",t);
	return 0;
}
