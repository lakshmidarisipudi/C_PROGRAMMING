void main()
{
int z=5;
int n=5;
int i,j,k;
clrscr();
for(i=0;i<n;i++)
{
for(j=1;j<i;j++)
{
printf(" ");
}
for(k=1;k<=z;k++)
{
printf("*");
}
z--;
printf("\n");
}
}