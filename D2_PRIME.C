#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n,count;
clrscr();
printf("enter range");
scanf("%d",&n);
for(i=2;i<=n;i++)
{
count=0;
for(j=2;j<=i;j++)
{
if(i%j==0)
count++;
}
if(count==1)
printf("%d\t",i);
}
getch();
}

