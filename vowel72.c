#include<stdio.h>
#include<conio.h>
int main()
{
    char a[10];
    int i,l,count=0;
    printf("enter the integer");
    scanf("%s",a);
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
        {
            count=count+1;
        }
        }
        if(count>0)
        {
            printf("vowel");
        }
        else
        {
            printf("not vowel");
        }
        return 0;
}
