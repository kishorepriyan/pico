#include <stdio.h>

int main(void) {
	int v,i,count=0;
	printf("enter the number");
	scanf("%d",&v);
	for(i=2;i<v;i++)
	{
		if((v%i)==0)
		count++;
	}
	if(count==0)
	{
		printf("prime number");
	}
	else
	{
		printf("not  prime number");
	}
	return 0;
}
