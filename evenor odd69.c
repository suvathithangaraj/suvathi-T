#include<stdio.h>
int main()
{
    int n1,n2,sub;
      printf("enter the number:");
  scanf("%d%d",&n1,&n2);
  sub=n1-n2;
  if((sub/2)==0)
  {
      printf("even");
  }
  else
  {
      printf("odd");
  }
  return 0;
}
  
