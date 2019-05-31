#include<stdio.h>
#include<conio.h>
struct stu
{
int rollno,s1,s2,total;
char name[10];
float avg;
}s[10];
void main()
{
int i,n;
clrscr();
printf("Enter the number of students:\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter the rollno:\n");
scanf("%d",&s[i].rollno);
printf("Enter the name:\n");
scanf("%s",s[i].name);
printf("Enter the marks in 2 subjects:");
scanf("%d%d",&s[i].s1,&s[i].s2);
s[i].total=s[i].s1+s[i].s2;
s[i].avg=s[i].total/2;
}
printf("\nRollno Name\t\tSub1\t Sub2\t Total\t Avg\t");
for(i=0;i<n;i++)
{
printf("%d \t %s \t\t %d \t %d \t %d \t %.2f \n",s[i].rollno,s[i].name,s[i].s1,s[i].s2,s[i].total,s[i].avg);
}
getch();
}