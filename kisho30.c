#include<stdio.h>
void main()
{
int h1,m1,h2,m2,h,m;
printf("enter the details");
scanf("%d %d %d %d",&h1,&m1,&h2,&m2);
h=h1-h2;
m=m1-m2;
printf("%d:%d",h,m);
}
