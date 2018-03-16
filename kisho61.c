#include <stdio.h>

int main(void) {
	char a[100];
	int i,j,k;
	printf("enter the string \n");
	scanf("%s",a);
	printf("enter the number \n");
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		printf("%c",a[i]);
	}
	return 0;
}
