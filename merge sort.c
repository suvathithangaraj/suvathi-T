#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,res,total
	char a[50];
	printf("\nEnter the value");
	scanf("%d",&n);
	printf("\nEnter the array elements");
	scanf("\n%s",&a[i]);
	for(i=0;i<=n;i++)
	{
		res=a[i]+a[i]+a[i];
    total=res/3;
		printf("\n%d %d",res,total);
	}
	return 0;
}

