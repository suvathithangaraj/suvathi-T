#include<stdio.h
#include<conio.h>
int main()  
{
char str[50];
int i,count=0;
printf("Enter any string : "\n);
gets(str);
for(i=0;str[i];i++)
if(str[i] == ' ')
count++;
printf("\nTotal blank spaces are : %d",count);
return 0;
}
