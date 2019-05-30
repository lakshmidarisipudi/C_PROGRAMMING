#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k,n,count,temp=1;
clrscr();
printf("Enter number of rows:\n");
scanf("%d",&n);
count=n-1;
for(i=1;i<=n;i++)
{
for(j=1;j<=count;j++)
{
printf(" ");
}
for(k=1;k<=temp;k++)
{
printf("*");
}
count--;
temp+=2;
printf("\n");
}
getch();
}
