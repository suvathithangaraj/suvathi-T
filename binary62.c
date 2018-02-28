#include<stdio.h>
#include<string.h>
int  main()
{
 char str[10];
 int i,a,c;
  scanf("%s",&str[i]);
  printf("enter the number:");
  a=strlen(str);
  for(i=0;i<a;i++)
  {
    if( (str[i]=='0')||(str[i]=='1'))
    {
      c++;
    }
  }
  if(c==a)
  {
    printf("yes");
    
  }
  else
  {
    printf("no");
  }
  return 0;
}
