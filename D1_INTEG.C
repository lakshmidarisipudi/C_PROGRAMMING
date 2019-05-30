#include<stdio.h>
#include<conio.h>
void main()
{
int num,rem,sum=0;
clrscr();
printf("enter the integer:");
scanf("%d",&num);
while(num>0)
{
rem=num%10;
sum=sum+rem;
num=num/10;
}
printf("sum of digits of an integer is:%d",sum);
getch();
}
