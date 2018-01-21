#include<stdio.h>
int main()
{
int num,original,remaind,result = 0;
printf("Enter a three digit integer");
scanf("%d",&num);
originalNum = num;
while (original != 0
{
remaind = original%10;
result += remaind*remaind*remaind;
originalNum /= 10;
}
if(result == num)
printf("%d is an Armstrong num",num);
else
printf("%d is not an Armstrong num",num);
return 0;
}
