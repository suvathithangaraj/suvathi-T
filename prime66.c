#include<stdio.h>
int main()
{
    int n,i,count;
    printf("enter the number:");
    scanf("%d",&n);
for(i=1;i<=n;i++)
{
if((n%i)==0)
{
count++;
}
}
if(count==0)
{
printf("prime number");
}
else
{
printf("not a prime number");
}
return 0;
}
