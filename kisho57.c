#include <stdio.h>

int main(void) {
	int a,b,c=0;
	printf("enter the number \n");
	scanf("%d %d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("the swapped numbers are %d %d",a,b);
	return 0;
}
