#include<stdio.h>
#include<math.h>
int main()
{
int a,i,t,s,u,n,b,c=0;
scanf("%d",&a);
t=a;
while(t!=0)
{
t=t/10;
c++;
}
printf("no of digit =%d",c);
scanf("%d",&u);
for(i=a;i<=u;i++)
{
n=i;
s=0;
while(n!=0)
{
b=n%10;
s=s+pow(b,c);
n=n/10;
}
if(i==s)
{
printf("the number is amstrong=%d",s);
}
}
return 0;
}

