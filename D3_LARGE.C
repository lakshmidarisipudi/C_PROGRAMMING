#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
int i,n;
float *data;
clrscr();
printf("Enter total no of elements:");
scanf("%d",&n);
data=(float*)calloc(n,sizeof(float));
if(data==NULL)
{
printf("memory not allocated.");
exit(0);
}
printf("\n");
for(i=0;i<n;++i)
{
printf("Enter number %d:",i+1);
scanf("%f",data+i);
}
for(i=1;i<n;++i)
{
if(*data<*(data+i))
*data=*(data+i);
}
printf("largest element=%.2f",*data);
getch();
}
