#include<stdio.h>
#include<conio.h>
void main()
{
int n=5;
int z=1;
int i,j,k;
clrscr();
for(i=1;i<=n;i++)
{
for(j=n-1;j>=i;j--)
{
printf(" ");
}
for(k=0;k<z;k++)
{
printf("%d",i);
}
z=z+2;
printf("\n");
}
getch();
}