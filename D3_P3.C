#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k,n,count,temp;
clrscr();
printf("Enter number of rows:\n");
scanf("%d",&n);
count=1;
temp=1+(n-1)*2;
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
count++;
temp-=2;
printf("\n");
}
getch();
}
