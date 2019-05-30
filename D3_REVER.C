#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str1[50],str2[20];
int length=0,i=0;
clrscr();
printf("enter a string");
scanf("%s",str1);
length=strlen(str1)-1;
for(i=0;str1[i]!='\0';i++)
{
str2[length]=str1[i];
length--;
}
str2[length]='\0';
printf("reverse is %s",str2);
getch();
}