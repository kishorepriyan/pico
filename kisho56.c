#include <stdio.h>
#include<string.h>
int main(void) {
	char a[100];
	int i,j,k=0,m=0;
	printf("enter the string \n");
	scanf("%s",a);
	j=strlen(a);
	for(i=0;i<j;i++)
	{
		if(((a[i]>='a') && (a[i]<='z')))
		{
			k=1;
		}
		if(((a[i]>='0') && (a[i]<='9')))
		{
			m=1;
		}
	}
	if((k==1) && (m==1))	
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	
	return 0;
}
