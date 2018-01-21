#include<stdio.h>
int main()
{
int i,first,last,count=0;
printf("\nEnter the first number");
scanf("%d",&first);
printf("\nEnter the last number");
scanf("%d",&last);
for(i=first+1;i<last;i++)
{
count=i%2;
  if(count==0)
{
printf("\n%d",i);
}
}
return 0;
}
