#include<stdio.h>
int main()
{
int a,b;
scanf("%d%d",&a,&b);
printf("\nbefore swapping%d%d",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("\nafter swapping%d%d",a,b);
return 0;
}
