#include<stdio.h>
#include<string.h>
int main()
{
char a[100],b[100];
printf("enter a string:");
gets(a);
strcpy(b,a);
strrev(b);
if(strcmp(a,b)==0)
printf("entered string is a palindrome\n");
else
printf("entered string is not a palindrome\n");
return 0;
}
