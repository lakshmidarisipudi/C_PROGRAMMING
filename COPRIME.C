#include<stdio.h>
#include<conio.h>
void main()
{
int a[20];
int i,j,c,n;
clrscr();
printf("enter the size");
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
c=0;
for(j=i+1;j<n;j++)
{
c=0;
if(a[j]<a[i])
{
if((a[i]%a[j]==0)
{
c++;
}
}
else
{
if(a[j]%a[i]==0)
{
c++;
}
}
if(c==0)
printf("(%d%d)",a[i],a[j]);
}
}
getch();
}
