#include<stdio.h>
#include<conio.h>
struct student
{
char name[50];
int rollno;
int age;
float marks;
}s;
void main()
{
clrscr();
printf("Enter the name:");
scanf("%s",s.name);
printf("Enter the rollno:");
scanf("%d",&s.rollno);
printf("Enter the age:");
scanf("%d",&s.age);
printf("Enter the marks:");
scanf("%f",&s.marks);
printf("Name is:%s\n",s.name);
printf("Rollno is:%d\n",s.rollno);
printf("Age is:%d\n",s.age);
printf("Marks are:%f\n",s.marks);
getch();
}