#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str1[10],str2[10],str3[10];
int i=0,a=0,b=0,p=0,m,n,ran=0,temp;
clrscr();
printf("enter 1st string:");
gets(str1);
printf("enter a string to be inserted:");
gets(str2);
printf("input the position, where the string to be inserted:\n");
scanf("%d",&p);
a=strlen(str1);
b=strlen(str2);
while(i<=a)
{
str3[i]=str1[i];
i++;
}
m=a+b;
n=b+p;
for(i=p;i<m;i++)
{
temp=str3[i];
if(ran<b)
{
str1[i]=str2[ran];
ran=ran+1;
}
str1[n]=temp;
n=n+1;
}
puts(str1);
getch();
}