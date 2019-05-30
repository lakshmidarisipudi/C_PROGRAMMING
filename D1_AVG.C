#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,sum;
float avg;
clrscr();
printf("enter the no of numbers:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("numbers are:%d",i);
}
sum=(n*(n+1))/2;
printf("sum of n natural numbers is:%d",sum);
avg=sum/n;
printf("average of n natural numbers is:%f",avg);
getch();
}