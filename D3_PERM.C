#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int n,i,k=0;
char a[10];
void perm(char a[10],int k,int n);
clrscr();
printf("enter a string:");
scanf("%s",&a);
printf("The permutation is:\n");
n=strlen(a);
perm(a,k,n);
getch();
}
void perm(char a[10],int k,int n)
{
char t,d[10];
int i;
if(k==n)
{
printf("%s",a);
return ;
}
else
{
for(i=k;i<n;i++)
{
t=a[i];
a[i]=a[k];
a[k]=t;
strcpy(d,a);
perm(d,k+1,n);
}
}
}

