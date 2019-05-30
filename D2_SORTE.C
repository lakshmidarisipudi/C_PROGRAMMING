#include<stdio.h>
#include<conio.h>
void main()
{
int a[20],n,i,x;
clrscr();
printf("enter the size:\n");
scanf("%d",&n);
printf("enter the array elements:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("value to be inserted:");
scanf("%d",&x);
i=n-1;
while(x<a[i] && i>=0)
{
a[i+1]=a[i];
i--;
}
a[i+1]=x;
n++;
printf("\n\n after insertion array is:\n");
for(i=0;i<n;i++)
{
printf("\n%d",a[i]);
}
getch();
}
