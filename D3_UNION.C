#include<stdio.h>
#include<conio.h>
union car
{
char *name;
int cost;
char color;
};
void main()
{
union car c,*ptr=&c;
clrscr();
c.name="Benz";
printf("\ncar is: %s",ptr->name);

getch();
}