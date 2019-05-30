#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int l,w;
float area,perimeter;
clrscr();
printf("Enter the values:");
scanf("%d%d",&l,&w);
area=w*l;
perimeter=2*(l+w);
printf("area of rectangle is:%f",area);
printf("perimeter of rectangle is:%f",perimeter);
getch();
}