#include <stdio.h>

int main(void) {
	int a;
	printf("enter the number \n");
	scanf("%d",&a);
	if(a%2==0)
	{
		printf("%d",a);
	}
	else
	{
		printf("%d",a-1);
	}
	
	return 0;
}
