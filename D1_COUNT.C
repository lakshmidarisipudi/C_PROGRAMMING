#include<stdio.h>
#include<conio.h>
void main()
{
int n,count=0;
clrscr();
printf("enter an integer:");
scanf("%d",&n);
while(n!=0)
{
n=n/10;
++count;
}
printf("number of digits:%d",count);
getch();
}