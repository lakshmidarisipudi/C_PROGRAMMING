#include<stdio.h>
#include<conio.h>
int main()
{
char line[30];
int i,vowels,consonants;
vowels=consonants=0;
printf("enter a line of string");
scanf("%d",line);
for(i=0;line[i]!='\0';++i)
{
if(line[i]=='a' || line[i]=='e' || line[i]=='i' || line[i]=='o' || line[i]=='u' || line[i]=='A' || line[i]=='E' || line[i]=='O' || line[i]=='U')
{
++vowels;
}
else
if((line[i]>='a' && line[i]<='z') || (line[i]>='A' && line[i]<='Z'))
{
++consonants;
}
}
printf("vowels: %d",vowels);
printf("consonants:%d",consonants);
return 0;
}