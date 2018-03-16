#include <stdio.h>
int main(void)
{
	int i,j=0,k=1,l,n;
	printf("Enter the number");
	scanf("%d",&n);
	for(i=1;i<=n;++i)
	{
		printf("%d",j);
		l=j+k;
		j=k;
		k=l;
	}
	return 0;
}
