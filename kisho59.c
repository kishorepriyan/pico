#include <stdio.h>

int main(void) {
	int i,a[10],j,k=1;
	printf("enter the numbers \n");
	scanf("%d",&a[10]);
	for(i=0;i<a[10];i++)
	{
		scanf("%d",&a[i]);
	}
	j=a[0];
	for(i=0;i<a[10];i++)
	{
		if(j<a[i])
		{
			j=a[i];
		}
	}
	printf("largest number %d",j);
	return 0;
}
