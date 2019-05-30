#include<stdio.h>
#include<conio.h>
void main()
{
int n,f1=0,f2=1,f3,i;
clrscr();
printf("\n enter range");
scanf("%d",&n);
if(n==1)
printf("\n %d %d",f1);
else if(n==2)
printf("\n %d %d",f1,f2);
else if(n>2)
{
printf("\n %d %d",f1,f2);
i=2;
while(i<n)
{
f3=f1+f2;
printf("\n %d",f3);
f1=f2;
f2=f3;
i++;
}
}
else
printf("enter valid number");
}
