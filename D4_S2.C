#include<stdio.h>
#include<conio.h>
void display();
struct display
{
char name[50],addr[30];
int id,age;
int marks;
}s[15];
void main()
{
int i;
for(i=0;i<15;i++)
{
s[i].id=i+1;
printf("\nThe std id:");
scanf("%d",&s[i].id);
printf("\nThe std age:");
scanf("%d",&s[i].age);
printf("\nThe std addr:");
scanf("%s",s[i].addr);
printf("\nThe std name:");
scanf("%s",s[i].name);
printf("\nThe std marks:");
scanf("%d",&s[i].marks);
}
printf("\n");
display();

getch();
}
void display()
{
int i;
for(i=0;i<15;i++)
{
printf("stu id is:%d\n",i+1);
printf("stu age is:%d\n",s[i].age);
printf("stu addr is:%s\n",s[i].addr);
printf("stu name is:%s\n",s[i].name);
printf("stu marks are:%d\n",s[i].marks);
printf("\n");
}
}
