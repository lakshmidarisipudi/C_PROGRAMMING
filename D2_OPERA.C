#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str1[20],str2[20];
int result,ch;
clrscr();
printf("enter the option:\n");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("enter 1st string\n");
       scanf("%s",str1);
       printf("enter 2nd string\n");
       scanf("%s",str2);
       result=strcmp(str1,str2);
       if(result==0)
       {
       printf("both are same");
       }
       else
       {
       printf("both are not equal");
       }
       break;
case 2:printf("enter a string\n");
       scanf("%s",str1);
       result=strlen(str1);
       printf("length of %s=%d",str1,result);
       break;
case 3:printf("enter 1st string\n");
       scanf("%s",str1);
       printf("enter 2nd string\n");
       scanf("%s",str2);
       strcat(str1,str2);
       printf("%s",str1);
       break;
case 4: printf("enter 1st string\n");
	scanf("%s",str1);
	printf("enter 2nd string\n");
	scanf("%s",str2);
	strcpy(str1,str2);
	printf("%s",str1);
	break;
case 5:printf("enter a string\n");
       scanf("%s",str1);
       strupr(str1);
       printf("uppercase is %s",str1);
       break;
case 6:printf("enter a string\n");
       scanf("%s",str2);
       strlwr(str2);
       printf("lowercase is %s",str2);
       break;
case 7: printf("enter a string:");
	scanf("%s",str1);
	strrev(str1);
	printf("reverse of a string is:%s",str1);
	break;
}
getch();
}