#include<stdio.h>
#include<conio.h>
void main()
{
int hun,fif,twe,ten,fiv,two,one,rup;
clrscr();
printf("enter the total amount:\n");
scanf("%d",&rup);
while(rup>=100)
{
hun=rup/100;
printf("no of hundreds=%d\n",hun);
break;
}
while(rup>=50)
{
fif=rup/50;
printf("no of fiftees=%d\n",fif);
break;
}
while(rup>=20)
{
twe=rup/20;
printf("no of twentees=%d\n",twe);
break;
}
while(rup>=10)
{
ten=rup/10;
printf("no of tens=%d\n",ten);
break;
}
while(rup>=5)
{
fiv=rup/5;
printf("no of fives=%d\n",fiv);
break;
}
while(rup>=2)
{
two=rup/2;
printf("no of twos=%d\n",two);
break;
}
while(rup>=1)
{
one=rup/1;
printf("no of ones=%d\n",one);
break;
}
getch();
}