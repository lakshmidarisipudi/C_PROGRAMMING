#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char s[200];
int count=0,i;
printf("enter sentence:\n");
scanf("%[^\n]s",s);
for(i=0;s[i]!='\0';i++)
{
if(s[i]==' ')
count++;
}
printf("no of words:%d",count+1);
getch();
}