#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str1[20],str2[20];
int result,ch,temp,length=0,i=0;
clrscr();
printf("enter the option:\n");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("enter 1st string\n");
       scanf("%s",str1);
       printf("enter 2nd string\n");
       scanf("%s",str2);
       for(i=0;str1[i]!='\o';i++)
       {
       if(str1[i]==str2[i])
       temp=1;
       else
       temp=0;
       }
       if(temp==1)
       printf("both are same");
       else
       printf("both are not equal");
       break;
case 2:printf("enter a string\n");
       scanf("%s",str1);
       while(str1[i]!='\0')
       i++;
       printf("length is %d",i);
       break;
case 3:printf("enter 1st string\n");
       scanf("%s",str1);
       printf("enter 2nd string\n");
       scanf("%s",str2);
       for(i=0;str1[i]!='\0'; i++)
       length++;
       temp=length;
       for(i=0;str2[i]!='\0';i++)
       {
       str1[temp]=str2[i];
       temp++;
       }
       str1[temp]='\0';
       printf("the concatenated strings are:%s%s",str1,str2);
       break;
case 4: printf("enter 1st string\n");
	scanf("%s",str1);
	for(i=0;str1[i]!='\0';i++)
	{
	str2[i]=str1[i];
	}
	str2[i]='\0';
	printf("the value of str2 is:%s");
	puts(str2);
	break;
case 5:printf("enter a string\n");
       scanf("%s",str1);
       for(i=0;str1[i]!='\0';i++)
       {
       str1[i]=str1[i]-32;
       }
       printf("uppercase is %s",str1);
       break;
case 6:printf("enter a string\n");
       scanf("%s",str2);
       for(i=0;str2[i]!='\0';i++)
       {
       str2[i]=str2[i]+32;
       }
       printf("lowercase is %s",str2);
       break;
case 7:printf("enter a string");
       scanf("%s",str1);
       length=strlen(str1)-1;
       for(i=0;str1[i]!='\0';i++)
       {
       str2[length]=str1[i];
       length--;
       }
       str2[length]='\0';
       printf("reverse is %s");
       puts(str2);
}
getch();
}