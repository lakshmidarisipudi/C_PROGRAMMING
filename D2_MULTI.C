#include<stdio.h>
#include<conio.h>
void main()
{
int n,r,i,k=0;
clrscr();
printf("enter the table no:\n");
scanf("%d",&n);
printf("enter the range:\n");
scanf("%d",&r);
for(i=1;i<=r;i++)
{
k=i*n;
printf("\n %d*%d=%d",i,n,k);
}
getch();
}