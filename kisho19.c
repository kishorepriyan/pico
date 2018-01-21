#include<stdio.h>
int main()
{
int n,i,fact=1;
printf("enter the number",n);
scanf("%d",&n);
for(i=0;i<=n;i++)
{
fact=fact+i;
}
printf("factorial is %d",fact);
return 0;
}
