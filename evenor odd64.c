#include<stdio.h>
int main()
{
    int n1,n2,add;
    printf("enter the number:");
    scanf("%d%d",&n1,&n2);
    add=n1+n2;
    if((add%2)==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
    return 0;
}
    
