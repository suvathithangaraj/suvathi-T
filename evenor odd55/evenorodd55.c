#include<stdio.h>
int main()
{
int n1,n2,mul;
scanf("%d%d",&n1,&n2);
printf("enter the number:");
mul=n1*n2;
if((mul%2)==0)
{
    printf("even");
}
else
{
    printf("odd");
}
return 0;
}
