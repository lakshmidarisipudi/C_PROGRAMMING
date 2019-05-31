#include<stdio.h>
#include<conio.h>
int sum(int,int);
int sub(int,int);
int mul(int,int);
struct complex
{
int a,b;
}s1,s2;
void main()
{
int a,b;
clrscr();
printf("Enter a value:");
scanf("%d",&s1.a);
printf("Enter b value:");
scanf("%d",&s1.b);
printf("Enter a value:");
scanf("%d",&s2.a);
printf("Enter b value:");
scanf("%d",&s2.b);
printf("\n");
sum(a,b);
sub(a,b);
mul(a,b);
getch();
}
int sum(a,b)
{
int x;
x.a=s1.a+s1.b;
x.b=s2.a+s2.b;
printf("sum for s1:%d\n",x.a);
printf("sum for s2:%d\n",x.b);
}
int sub(a,b)
{
int x,a,b;
x.a=s1.a-s1.b;
x.b=s2.a-s2.b;
printf("sub for s1:%d\n",x.a);
printf("sub for s2:%d\n",x.b);
}
int mul(a,b)
{
int x,a,b;
x.a=s1.a*s1.b;
x.b=s2.a*s2.b;
printf("mul for s1:%d\n",x.a);
printf("mul for s2:%d\n",x.b);
}


