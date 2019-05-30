#include<stdio.h>
#include<conio.h>
void main()
{
int a1[50],a2[50],i,n;
clrscr();
printf("enter no of elements:\n");
scanf("%d",&n);
printf("enter 1st array elements:\n");
for(i=0;i<n;i++)
{
scanf("%d\t",&a1[i]);
}
printf("enter 2nd array elements:\n");
for(i=0;i<n;i++)
{
scanf("%d\t",&a2[i]);
}
printf("copying..");
for(i=0;i<n;i++)
{
a2[i]=a1[i];
}
printf("array after copying:");
for(i=0;i<n;i++)
printf("a2[%d]=%d",i,a2[i]);
getch();
}