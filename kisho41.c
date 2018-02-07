#include <stdio.h>

int main(void) {
	int i,k;
	char a[100];
	printf("enter the string \n");
	scanf("%s",a);
	printf("enter the number \n");
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		printf("%s \n",a);
	}
	return 0;
}
