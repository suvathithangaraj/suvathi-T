#include<stdio.h>
int main()
{
    int k,i;
    char str[10];
    printf("enter the number:");
    scanf("%d",&k);
    printf("enter the string:");
    scanf("%s",&str);
    for(i=0;i<k;i++)
    {
        printf("%c",str[i]);
    }
    return 0;
    }
