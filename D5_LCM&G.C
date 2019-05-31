#include<stdio.h>
#include<conio.h>
void main()
{
int n1,n2,gcd,lcm,rem,num,den;
clrscr();
printf("Enter two numbers:\n");
scanf("%d%d",&n1,&n2);
if(n1>n2)
{
num=n1;
den=n2;
}
else
{
num=n2;
den=n1;
}
rem=num%den;
while(rem!=0)
{
num=den;
den=rem;
rem=num%den;
}
gcd=den;
lcm=n1*n2/gcd;
printf("GCD of %d and %d=%d\n",n1,n2,gcd);
printf("LCM of %d and %d=%d\n",n1,n2,lcm);
getch();
}