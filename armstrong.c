#include<stdio.h>
#include<conio.h>
int main()
{
int n,t,rem,result=0;
printf("enter the numbers");
scanf("%d",&n);
t=n;
while(n!=0)
{
rem=n%10;
result=result+rem*rem*rem
n=n\10;
}
if(t==result)
{
while(n!=0)
{
rem=n%10
result=result+rem*rem*rem
n=n/10;
printf("%d is an armstrong no",n);
}
else
{
printf("%d is not an armstrong no",n);
}
return 0;
}
