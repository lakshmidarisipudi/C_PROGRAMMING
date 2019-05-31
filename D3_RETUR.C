#include<stdio.h>
#include<conio.h>
int* findLarger(int*, int*);
void main()
{
int na=0;
int nb=0;
int *result;
clrscr();
printf("\n\n pointer: show a function returning pointer:\n");
printf("Enter the 1st number:");
scanf("%d",&na);
printf("Enter the 2nd number:");
scanf("%d",&nb);
result=findLarger(&na, &nb);
printf("The number %d is larger \n\n",*result);
getch();
}
int* findLarger(int *n1, int *n2)
{
if(*n1 > *n2)
return n1;
else
return n2;
}
