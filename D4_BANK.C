#include<stdio.h>
#include<conio.h>
struct bank
{
int accno;
char name[50];
int bal;
}b[3];
void check(struct bank b[],int n)
{
int i;
printf("-------customers who is having <200 balance-------\n");
for(i=0;i<n;i++)
{
if(b[i].bal<200)
{
printf("accno:%d\n",b[i].accno);
printf("name:%s\n",b[i].name);
printf("balance:%d\n",b[i].bal);
}
}
}
void main()
{
int i;
clrscr();
for(i=0;i<3;i++)
{
printf("----Enter details:----\n");
printf("Enter account num:\n");
scanf("%d",&b[i].accno);
printf("Enter name:\n");
scanf("%s",b[i].name);
printf("Enter balance:\n");
scanf("%d",&b[i].bal);
}
check(b,3);
getch();
}
