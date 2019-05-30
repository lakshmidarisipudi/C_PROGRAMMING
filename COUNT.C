#include<stdio.h>
void main()
{
char str[30],ch;
int i=0,c=0;
printf("enter the string:\n");
gets(str);
printf("\n enter the character:");
scanf("%d",&ch);
while(str[i]!='\0');
{
if(str[i]==ch)
{
c++;
}
i++;
}
printf("\n%c occurs %d time",ch,c);
}