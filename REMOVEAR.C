#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,n,pos;
clrscr();
printf("enter size");
scanf("%d",&n);
printf("enter array elements");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter the position");
scanf("%d",&pos);
for(i=pos-1;i<n;i++)
a[i]=a[i+1];
n--;
printf("array elements are");
for(i=0;i<n;i++)
printf("%d",a[i]);
getch();
}