#include <stdio.h>

int main(void) {
	int i,j,k,a[10];
	printf("enter the numbers \n");
	scanf("%d",&a[10]);
	for(i=0;i<a[10];i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<a[10];++i)
	{
		if(a[i]<a[10])
		a[i]=a[10];
	}
	printf("the largest no is %d",a[i]);
	return 0;
}
