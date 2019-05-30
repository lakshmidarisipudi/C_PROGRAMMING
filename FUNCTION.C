#include<stdio.h>
#include<conio.h>
void main()
{
char a[50];
int c;
printf("enter string");
gets(a);
c=count(a);
printf("count: %d",c);
}
int count(char a[50])
{
int i,j,cnt=0;
for(i=0;i<strlen(a);i++)
{
if(a[i]=='1' && a[i+1]=='0')
{
for(j=i+2;j<strlen(a);j++)
{
if(a[j]=='1')
{
cnt++;
break;
}
else if(a[j]=='0')
continue;
else
break;
}
}
}
return cnt;
}