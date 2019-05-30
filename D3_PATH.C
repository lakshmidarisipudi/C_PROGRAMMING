#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str1[10],str2[10],str3[10];
int t,i=0,m,n,p;
clrscr();
printf("enter 1st string:");
gets(str1);
printf("enter a string to be inserted:");
gets(str2);
printf("input the position, where the string to be inserted:\n");
scanf("%d",&p);
for(i=0;i<p;i++)
{
str3[i]=str1[i];
t=p;
}
for(i=0;str2[i]!='\0';i++)
{
str3[p]=str2[i];
p++;
}
for(i=t;str1[i]!='\0';i++)
{
str3[p]=str1[i];
p++;
}
str3[p]='\0';
puts(str3);
getch();
}