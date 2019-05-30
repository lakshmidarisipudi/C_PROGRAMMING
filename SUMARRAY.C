#include<stdio.h>
#include<conio.h>
void main()
{
int i,a[10],n,sum=0;
printf("enter the size");
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
sum+=a[i];
printf("sum of elements are %d",sum);
}