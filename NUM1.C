void main()
{
int z=5;
int n=5;
int i,j,k;
for(i=1;i<=n;i++)
{
for(j=n;j>=1;j--)
{
printf(" ");
}
for(k=1;k<=z;k++)
{
printf("%d",i);
}
z++;
printf("\n");
}
}