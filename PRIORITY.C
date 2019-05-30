#include<stdio.h>
#include<conio.h>
#define MAX 3
void insert(int item);
int deletion();
void display();
int front=-1,rear=-1;
int queue[MAX];
void main()
{
int ch,item,x;
clrscr();
do
{
printf("\n 1.insertion \n 2.deletion \n 3.display \n 4.exit");
printf("\n enter your choice");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("enter the item");
       scanf("%d",&item);
       insert(item);
       break;
case 2:x=deletion();
       if(x>0)
       printf("%d is deleted",x);
       break;
case 3:printf("elements of queue \n");
       display();
       break;
}
}while(ch!=4);
getch();
}
void insert(int item)
{
int j;
if(rear==MAX-1)
printf("queue overflow");
else
{
if(front==-1)
front++;
j=rear;
while(j>=0 && item<queue[j])
{
queue[j+1]=queue[j];
j=j-1;
}
rear++;
queue[j+1]=item;
}
}
int deletion()
{
int x;
if((front==-1) && (rear==-1))
{
printf("queue underflow");
return 0;
}
else
{
x=queue[front];
if(front==rear)
{
front=-1;
rear=-1;
}
else if(front==MAX-1)
front=0;
else
front++;
return x;
}
}
void display()
{
int i;
if((front==-1) &&(rear==-1))
{
printf("queue empty");
}
else
{
if(front<=rear)
{
for(i=front;i<=rear;i++)
printf("%d\t",queue[i]);
}
else
{
for(i=front;i<MAX;i++)
printf("%d\t",queue[i]);
for(i=0;i<=rear;i++)
printf("%d\t",queue[i]);
}
}
}

