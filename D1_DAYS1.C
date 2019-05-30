#include<stdio.h>
#include<conio.h>
void main()
{
long n;
int m,w,d,y=365,m1=30,w1=7;
clrscr();
printf("enter no of days:\n");
scanf("%lu",&n);
printf("years=%lu \n",n/y);
printf("months=%d \n",n/m1);
printf("weeks=%d \n",n/w1);
printf("days=%d \n",d);
getch();
}

