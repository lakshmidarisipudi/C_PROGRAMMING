#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
int i=0;
int *ptr=NULL;
clrscr();
ptr=(int *)calloc(5,sizeof(int));
if(ptr==NULL)
{
printf("ERROR:memory allocation failed\n");
return 1;
}
printf("By default, all values are:");
for(i=0;i<5;i++)
{
printf("%d",ptr[i]);
}
printf("\n");
for(i=0;i<5;i++)
{
ptr[i]=i;
}
printf("After entered values:");
for(i=0;i<5;i++)
printf("%d",ptr[i]);
}
free(ptr);
getch();
return 0;
}
