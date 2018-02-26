#include<stdio.h>
int main()
{
int n,count=0;
scanf("%d",&n);
printf("\nenter the number");
while(n!=0)
{
  n=n/10;
  count++;
}
printf("\nnumber of numeric digits given%d",count);
return 0;
}
