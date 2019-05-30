#include<stdio.h>
void main()
{
int i,n, key,a[10],low,high,mid;
printf("enter range for array:");
scanf("%d",&n);
printf("enter elements into array:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter the search element:");
scanf("%d",&key);
low=0;
high=n-1;
for(i=0;i<n;i++)
{
mid=(low+high)/2;
if(a[mid]==key)
{
printf("element %d found at %d",key,mid);
break;
}
if(key<a[mid])
high=mid;
else
low=mid+1;
if(i==n-1)
printf("element %d not found in array",key);
 }
}

