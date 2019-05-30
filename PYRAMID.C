#include<stdio.h>
#include<conio.h>
void main()
{
int z=1;
int n=5;
int psp=n-1;
int i,j,k;
clrscr();
for(i=0;i<n;i++)
{
for(j=psp;j>i;j--)
{
printf(" ");
}
for(k=0;k<z;k++)
{
printf("*");
}
z=z+2;
printf("\n");
}
getch();
}