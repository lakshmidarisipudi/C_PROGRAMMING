#include<conio.h>
void main()
{
int i,j;
clrscr();
for(i=1;i<=5;i++)
{
for(j=1;j<=5;j++)
{
if(j==3 || i==3)
printf("*");
else
printf(" ");
}
printf("\n");
}
getch();
}