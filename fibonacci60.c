#include<stdio.h>
int main()
{
  int n,f,s,t,i;
  s=0;t=1;
  scanf("%d",&n);
  printf("n = %d",n);
  printf("\nenter the number");
  for(i=0;i<=n;i++)
  {
    f=s+t;
    s=t;
    t=s;
  }
  printf("\nfibonacci series%d",s);
  return 0;
}
  
