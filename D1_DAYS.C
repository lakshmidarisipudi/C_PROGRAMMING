#include<stdio.h>
#include<conio.h>
void main()
{
int days,year,months,weeks;
clrscr();
printf("enter no of days:\n");
scanf("%d",&days);
year=days/365;
printf("no of years is %d:",year);
months=days/30;
printf("no of months is %d:",months);
weeks=days/7;
printf("no of weeks is %d",weeks);
getch();
}