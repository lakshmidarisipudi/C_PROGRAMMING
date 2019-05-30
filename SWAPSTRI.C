#include<stdio.h>
#include<conio.h>
void swap(char **x,char **y)
{
char *temp;
temp=*x;
*x=*y;
*y=temp;
}
int main()
{
char *str1="hii";
char *str2="hello";
clrscr();
swap(&str1,&str2);
printf("%s\n",str1);
printf("%s\n",str2);
getch();
return 0;
}