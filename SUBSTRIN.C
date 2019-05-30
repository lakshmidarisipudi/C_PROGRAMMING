#include<stdio.h>
#include<conio.h>
void main()
{
char string[100],sub[100];
int position,length,c=0;
printf("input a string\n");
gets(string);
printf("enter the position and length of sub-string\n");
scanf("%d%d",&position,&length);
while(c<length)
{
sub[c]=string[position+c-1];
c++;
}
sub[c]='\0';
printf("required string is \"%s\"\n",sub);
return 0;
}
