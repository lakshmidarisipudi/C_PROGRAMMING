#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
int *ptr=NULL;
clrscr();
ptr=(int *)malloc(sizeof(int));
if(ptr==NULL)
{
printf("ERROR:memory allocation failed\n");
return 1;
}
*ptr=5;
printf("%d\n",*ptr);
free(ptr);
getch();
return 0;
}