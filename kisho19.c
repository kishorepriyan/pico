#include<stdio.h>
int main()
{
int n,i,fac=1;
printf("enter the number",n);
scanf("%d",&n);
for(i=0;i<=n;i++)
{
fac=fac+i;
}
printf("factorial is %d",fac);
return 0;
}
