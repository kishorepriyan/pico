#include <stdio.h>

int main(void) {
	int i,j=0,k=1,l,m;
	printf("Enter the number");
	scanf("%d",&m);
	for(i=1;i<=m;++i)
	{
		printf("%d",j);
		l=j+k;
		j=k;
		k=l;
	}
	return 0;
}
