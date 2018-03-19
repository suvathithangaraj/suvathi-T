#include<stdio.h>
int main()
{
    int a,b,n;
    printf("enter the number");
    scanf("%d",&n);
    printf("enter the intervals");
    scanf("%d",&a,&b);
    if((n>a)&&(n<b))
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
    
