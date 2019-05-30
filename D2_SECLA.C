#include<stdio.h>
#include<conio.h>
#include<limits.h>
void main()
{
int a[20],n,i,first,second;
clrscr();
printf("enter the size:\n");
scanf("%d",&n);
printf("enter the array elements:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
first=second=INT_MIN;
for(i=0;i<n;i++)
{
if(a[i]>first)
{
second=first;
first=a[i];
}
else if(a[i]>second && a[i]<first)
{
second=a[i];
}
}
printf("The largest no is:%d\n",first);
printf("The second largest no is:%d\n",second);
getch();
}