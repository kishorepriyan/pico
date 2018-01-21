#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,flag=0;
scanf("%d",&n);
for(i=3;i<n;i=i+2)
{
if(n%i==0)
flag=1;
}
if(flag==0)
printf("prime");
else
printf("not prime");
return 0;
}
