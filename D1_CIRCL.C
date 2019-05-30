#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
float pi=22.7,r1,r2,area,perimeter;
clrscr();
printf("enter the values:");
scanf("%f%f",&r1,&r2);
area=pi*r1*r2;
perimeter=2*pi*r1;
printf("area of circle is:%f",area);
printf("perimeter of circle is:%f",perimeter);
getch();
}