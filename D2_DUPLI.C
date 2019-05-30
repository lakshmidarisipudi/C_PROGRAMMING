#include<stdio.h>
#include<conio.h>
void main()
{
int a[200],n,i,j,count=0;
clrscr();
printf("enter the size:\n");
scanf("%d",&n);
printf("enter the array elements:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]==a[j])
{
count++;
break;
}
}
}
printf("\n total number of duplicate elements found in array=%d",count);
getch();
}