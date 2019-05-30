#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],freq[100];
int n,i,j,count;
clrscr();
printf("enter size");
scanf("%d",&n);
printf("enter elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
freq[i]=-1;
}
for(i=0;i<n;i++)
{
count=1;
for(j=i+1;j<n;j++)
{
if(a[i]==a[j])
{
count++;
freq[j]=0;
}
}
if(freq[i]!=0)
{
freq[i]=count;
}
}
printf("frequency of all elements in array");
for(i=0;i<n;i++)
{
if(freq[i]!=0)
{
printf("%d occurs %d times",a[i],freq[i]);
}
}
getch();
}
