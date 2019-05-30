#include<stdio.h>
#include<conio.h>
void fun()
{
printf("pathfront");
}
int main(void)
{
printf("address of function main() is:%p\n",main);
printf("address of function fun() is:%p\n",fun);
return 0;
}