#include <stdio.h>

int main(void) {
	int a,b;
	printf("enter the number \n");
	scanf("%d %d",&a,&b);
	a=a ^ b;
	b=a ^ b;
	a=a ^ b;
	printf("the swapped numbers are %d %d",a,b);
	return 0;
}
