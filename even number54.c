#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
printf("enter the number");
if((n%2)==0)
{
    printf("nearest even %d",n);
}
else
{
printf("nearest even %d",--n);
}
return 0;
}
