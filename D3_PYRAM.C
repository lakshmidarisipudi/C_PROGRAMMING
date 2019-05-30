#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,j;
clrscr();
printf("enter no of rows:\n");
scanf("%d",&n);
for(i=n;i>=1;i--)
{
for(j=i;j>=1;j--)
{
printf("*");
}
printf("\n");
}
getch();
}