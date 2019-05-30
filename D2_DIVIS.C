#include<stdio.h>
#include<conio.h>
void main()
{
int n,ch,temp,sum,e,o,s1,s2,t;
clrscr();
printf("----------DIVISIBILITY RULE----------\n");
printf("enter a number:\n");
scanf("%d",&n);
printf("enter a option from 2 to 11:\n");
scanf("%d",&ch);
switch(ch)
{
case 2:temp=n%10;
       if(temp%2==0)
       {
       printf("divisible by 2\n");
       }
       else{
       printf("not divisible by 2\n");
       }
       break;
case 3:temp=n%10;
       sum=sum+temp;
       n=n/10;
       if(temp%3==0)
       {
       printf("divisible by 3");
       }
       else
       {
       printf("not divisible by 3");
       }
       break;
case 4:temp=n%100;
       if(temp%4==0)
       {
       printf("divisible by 4");
       }
       else
       {
       printf("not divisible by 4");
       }
       break;
case 5:temp=n%10;
       if(temp%5==0 || temp%5==5)
       {
       printf("divisible by 5");
       }
       else
       {
       printf("not divisible by 5");
       }
       break;
case 6:if(n%2==0 && n%3==0)
       {
       printf("divisible by 6");
       }
       else
       {
       printf("not divisible by 6");
       }
       break;
case 7:if(n%7==0)
       {
       printf("divisible by 7");
       }
       else
       {
       printf("not divisible by 7");
       }
       break;
case 8:temp=n%1000;
       if(temp%8==0)
       {
       printf("divisible by 8");
       }
       else
       {
       printf("not divisible by 8");
       }
       break;
case 9:temp=n%100;
       sum=sum+temp;
       n=n/10;
       if(temp%9==0)
       {
       printf("divisible by 9");
       }
       else
       {
       printf("not divisible by 9");
       }
       break;
case 10:temp=n%10;
	if(temp==0)
	{
	printf("divisible by 10");
	}
	else
	{
	printf("not divisible by 10");
	}
	break;
case 11:while(n>0)
	{
	e=n%10;
	s1=s1+e;
	n=n/10;
	o=n%10;
	s2=s2+o;
	n=n/10;
	}
	temp=s2-s1;
	if((temp%11==0) || (temp==0))
	{
	printf("divisible by 11");
	}
	else
	{
	printf("not divisible by 11");
	}
	break;
default:printf("wrong number");
	break;
}
getch();
}