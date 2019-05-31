#include<stdio.h>
#include<conio.h>
struct student
{
char name[50];
int roll_no;
int marks;
};
void main()
{
struct student s={"ram",12,500};
struct student *stu;
stu=&s;
clrscr();
printf("Name is:%s\n",stu->name);
printf("Roll_no is:%d\n",stu->roll_no);
printf("Marks are:%d\n",stu->marks);
getch();
}