void main()
{
int a[20],n,i;
clrscr();
printf("enter the size:");
scanf("%d",&n);
printf("enter the array elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\n array in reverse order:");
for(i=n-1;i>=0;i--)
{
printf("%d\t",a[i]);
}
printf("positive elements:");
for(i=0;i<5;i++)
{
if(a[i]>0)
printf("%d\t",a[i]);
}
printf("negative elements:");
for(i=0;i<5;i++)
{
if(a[i]<0)
printf("%d\t",a[i]);
}
getch();
}
