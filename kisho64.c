#include <stdio.h>
 
int main(void) {
	int i,j,k;
	printf("enter two numbers \n");
	scanf("%d",&i);
	scanf("%d",&j);
	k=i+j;
	if(k%2==0)
	printf("even");
	else
	printf("odd");
	return 0;
}
