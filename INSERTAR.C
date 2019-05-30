#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,n,pos,value;
clrscr();
printf("enter the size");
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter the index");
scanf("%d",&pos);
printf("enter the value to insert");
scanf("%d",&value);
for(i=n-1;i>=pos;i--)
{
a[i+1]=a[i];
if(i==pos)
{
a[i]=value;
break;
}
}
for(i=0;i<=n;i++)
{
printf("%d\n",a[i]);
}
getch();
}