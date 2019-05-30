#include<stdio.h>
#include<conio.h>
void main()
{
int a[20],n,i,x,p;
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
printf("input the position, where the value to be inserted:\n");
scanf("%d",&p);
printf("the current list of the array:\n");
for(i=0;i<n;i++)
printf("%5d",a[i]);
for(i=n;i>=p;i--)
a[i]=a[i-1];
a[p-1]=x;
printf("\n\nthe new list is:\n");
for(i=0;i<=n;i++)
printf("%5d",a[i]);
printf("\n\n");
getch();
}
