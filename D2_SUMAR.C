#include<stdio.h>
#include<conio.h>
void main()
{
int a[20],n,i,sum=0;
clrscr();
printf("enter the size:");
scanf("%d",&n);
printf("enter the array elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
printf("sum of all array elements are:%d",sum);
getch();
}

