#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int s1[20],s2[20],s3[50],i,j;
printf("enter first string");
gets(s1);
printf("enter second string");
gets(s2);
for(j=0;i<strlen(s1)||j<strlen(s2);i++)
{
for(j=0;i<strlen(s1)||j<strlen(s2);j++)
if(s1[i]==s2[j])
{
s1[i]=s1[i+1];
s2[j]=s2[j+1];
}
puts(s1);
puts(s2);

for(i=0,j=0;i<strlen(s1)||j<strlen(s2);i++,j++)


