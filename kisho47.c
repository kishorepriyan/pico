#include <stdio.h>

int main(void) {
	int n, i,j,a[n],t;
	printf("enter the numbers \n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	printf("%d %d",a[0],a[n-1]);
	return 0;
}
