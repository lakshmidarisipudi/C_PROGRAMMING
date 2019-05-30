#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,ps=0,ns=0,num;
clrscr();
printf("enter size:\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
scanf("%d",&num);
if(num>0)
ps=ps+num;
else
ns=ns+num;
}
printf("sum of positive numbers=%d\n",ps);
printf("sum of negative numbers=%d\n",ns);
getch();
}