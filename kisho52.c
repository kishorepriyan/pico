#include <stdio.h>

int main(void) {
	int i,j=0;
	printf("enter the number");
	scanf("%d",&i);
	while(i!=0)
	{
		j=(j*10)+(i/10);
		i/=10;
	}
	while(j!=0)
	{
		switch(j%10)
		{
			case'0':
			printf("zero");
			break;
			case'1':
			printf("one");
			break;
			case'2':
			printf("two");
			break;
			case'3':
			printf("three");
			break;
			case'4':
			printf("four");
			break;
			case'5':
			printf("five");
			break;
			case'6':
			printf("six");
			break;
			case'7':
			printf("seven");
			break;
			case'8':
			printf("eight");
			break;
			case'9':
			printf("nine");
			break;
		}
		j=j/10;
	}
	return 0;
}
