#include<stdio.h>
void main()
{
int a[50],n,i,sum=0,b;
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
sum=sum+a[i];
b=sum/n;
}
printf("%d",b);
}
