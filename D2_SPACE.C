#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str[50];
int c=0,c1=1,c2=0,i;
clrscr();
printf("enter a string");
gets(str);
for(i=0;str[i];i++)
{
if(str[i]==' ')
c++;
else if(str[i]=='\n')
c1++;
else if(str[i]=='\t')
c2++;
}
printf("spaces=%d\nlines=%d\ntabs=%d",c,c1,c2);
getch();
}
