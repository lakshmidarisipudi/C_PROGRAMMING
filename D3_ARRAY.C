#include<stdio.h>
#include<conio.h>
void main()
{
char c;
int i,j,n;
clrscr();
printf("enter size:\n");
scanf("%d",&n);
c=97;
for(i=0;i<n;i++)
{
for(j=0;j<=i+1;j++)
{
printf("%c",c);
}
c++;
}
getch();
}