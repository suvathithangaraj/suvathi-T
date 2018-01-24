#include<stdio.h>
#include<conio.h>
int a,b,i,flag;
printf("enter two numbers");
scanf("%d%d",&a,&b);
printf("prime numbers between the %d and %d",a,b );
while(b<a)
{
flag=0;
for(i=2;i<=b\2;i++)
{
if(b% i==0)
{
flag=1;
break;
}
}
if(flag==0)
printf("%d",b);
++low;
}
return 0;
}


