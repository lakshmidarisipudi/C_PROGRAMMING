#include<stdio.h>
#include<conio.h>
void main()
{
int z=1;
int n=5;
int i,j,k;
clrscr();
for(i=1;i<=n;i++)
{
for(j=n;j>=i;j--)
{
printf(" ");
}
for(k=1;k<=z;k++)
{
printf("%d",j);
}
z++;
printf("\n");
getch();
}
}