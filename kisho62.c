#include <stdio.h>
#include <string.h>
int main(void) {
	char a[10];
	int i,j=0,k;
	printf("Enter the string \n");
	scanf("%s",a);
	k=strlen(a);
	for(i=0;i<k;i++)
	{
		if(a[i]=='0' || a[i]=='1')
		{
			j=1;
		}
		else
		{
			j=0;
			break;
		}
		
	}
	if(j==1)
	{
		printf("yes");
	}
	return 0;
}
