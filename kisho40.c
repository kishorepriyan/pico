#include <stdio.h>

int main(void) {
	int i,t1=0,t2=1,n,k;
	printf("enter the numbers");
	scanf("%d",&n);
	printf("the fibonacii series:");
	for(i=1;i<=n;++i)
	{
		printf("%d",t1);
		k=t1+t2;
		t1=t2;
		t2=k;
	}
	return 0;
}
