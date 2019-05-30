#include<stdio.h>
#include<conio.h>
void main()
{
int n,max,m1,m2,m3,m4,m5,total,avg,grade,per;
clrscr();
printf("enter no of subjects:\n");
scanf("%d",&n);
max=n*100;
printf("maximum mark is:%d\n",max);
printf("enter %d marks:\n",n);
scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
total=m1+m2+m3+m4+m5;
printf("total is:%d\n",total);
avg=total/n;
printf("average mark is:%d",avg);
per=(total*100)/max;
printf("percentage is:%d",per);
if(total>=400)
{
printf("your grade is 'O' and percentage is %d",per);
}
else if(total>=300 && total<=399)
{
printf("your grade is 'E' and percentage is %d",per);
}
else if(total>=200 && total<=299)
{
printf("your grade is 'A' and percentage is %d",per);
}
else
{
printf("you are failed and percentage is %d",per);
}
getch();
}








