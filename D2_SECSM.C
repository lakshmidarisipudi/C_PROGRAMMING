#include<stdio.h>
#include<conio.h>
void main()
{
int a[20],n,i,small,s_small;
clrscr();
printf("enter the size:\n");
scanf("%d",&n);
printf("enter the array elements:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
small=s_small=a[0];
for(i=1;i<n;i++)
{
if(small>a[i])
{
s_small=small;
small=a[i];
}
else if(s_small>a[i] && a[i]!=small)
{
s_small=a[i];
}
}
printf("The second smallest no is:%d\n",s_small);
getch();
}