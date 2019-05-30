#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n,a[10],key;
clrscr();
printf("\n enter the range for array:");
scanf("%d",&n);
printf("\n enter elements into array:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("\n enter the search element:");
scanf("%d",&key);
for(i=0;i<n;i++)
{
if(key==a[i])
{
printf("\n element %d found at %d",key,i);
break;
}
else
{
if(i==n)
printf("\n element %d not found in array",key);
getch();
   }
  }
 }