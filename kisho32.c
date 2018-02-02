#include <stdio.h>

int main(void) {
	char a[1000];
	int i,count=0;
	printf("enter the sentence \n");
	scanf("%s",a[1000]);
	for(i=0;a[i]!='\0';i++)
	{
	    if(a[i]==' ');
	    count++;
	}
	printf("the no of words in given string %d",count+1);

	return 0;
}

