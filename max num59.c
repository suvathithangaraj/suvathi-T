#include<stdio.h>
int main()
{
int a[10],i,j,max,n;
scanf("%d",&n);
printf("enter the number");
for(i=0;i<n;i++)
{
  for(i=0;i=n-1;i++)
  {
  for(j=0;j<n;j++)
  {
  if(a[i]>a[j])
  {
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
  }
  }
}
printf("%d",max);
}
return 0;
}
