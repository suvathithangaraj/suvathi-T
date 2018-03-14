#include<stdio.h>
int main()
{
 int i,c=0;   
    char a[10];
    scanf("%[^\n]s",&a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ')
        {
            c++;
        }
    }
    printf("%d",c+1);
    return 0;
    }
