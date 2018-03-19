#include<stdio.h>
#include<string.h>
int main()
{
    char a[10],b[20];
    int l,i;
    printf("enter the integer");
    scanf("%s",a);
    l=strlen(a);
    for(i=l-1;i>=0;i--)
	{
		b[l-i-1]=a[i];
	}
	if(strcmp(a,b)==0)
	{
	    printf("yes");
	}
	else
	{
	    printf("no");
	}
	return 0;
	}
	
