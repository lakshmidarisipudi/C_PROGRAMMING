#include<stdio.h>
#include<conio.h>
void main()
{
char id[10];
int hour;
double value,salary;
clrscr();
printf("enter the employeed id:\n");
scanf("%s",&id);
printf("enter the working hours:\n");
scanf("%d",&hour);
printf("salary amount per hour\n");
scanf("%lf",&value);
salary=value*hour;
printf("employees id=%s\nsalary=$%2lf\n",id,salary);
getch();
}