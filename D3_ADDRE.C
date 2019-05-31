#include<stdio.h>
#include<conio.h>
void fun()
{
printf("pathfront");
}
void main()
{
clrscr();
printf("address of function main() is:%p\n",main);
printf("address of function fun() is:%p\n",fun);
getch();
}