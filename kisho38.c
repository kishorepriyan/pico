#include <stdio.h>
int swap(int*,int*);
int main(void) {
	int no1,no2;
	printf("enter the first number");
	scanf("%d",&no1);
	printf("enter the second number");
	scanf("%d",&no2);
	swap(&no1,&no2);
	printf("the swapped numbers are number1=%d number2=%d",no1,no2);
	return 0;
}
int swap(int*x,int*y)
{
	*x=*x ^ *y;
	*y=*x ^ *y;
	*x=*x ^ *y;
}
