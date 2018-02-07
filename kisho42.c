#include <stdio.h>
#include<string.h>

int main(void) {
	int i,j;
	char a[100],b[100];
	printf("enter the string1 \n");
	scanf("%s",a);
	printf("enter the string2 \n");
	scanf("%s",b);
	i=strlen(a);
	j=strlen(b);
	if(i>=j)
	printf("%s",a);
	else
	printf("%s",b);
	return 0;
}
