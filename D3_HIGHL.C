#include<stdio.h>
#include<conio.h>
void main()
{
int a[50],i,n,high,low;
clrscr();
printf("Enter size:\n");
scanf("%d",&n);
printf("Enter array elements:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
high=low=a[0];
for(i=0;i<n;i++)
{
if(a[i]>high)
high=a[i];
else
{
if(a[i]<low)
low=a[i];
}
}
printf("The highest value is:%d\n",high);
printf("The lowest value is:%d\n",low);
getch();
}
