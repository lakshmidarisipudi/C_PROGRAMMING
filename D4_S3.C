#include<stdio.h>
struct dist
{
int feet;
float inch;
}d1,d2,distance;
void main()
{
int i;
clrscr();
printf("Enter feet \n");
scanf("%d",&d1.feet);
printf("Enter inch \n");
scanf("%f",&d1.inch);
printf("Enter feet \n",i);
scanf("%d",&d2.feet);
printf("Enter inch \n",i);
scanf("%f",&d2.inch);
distance.feet=d1.feet+d2.feet;
distance.inch=d1.inch+d2.inch;
if(distance.inch>12.0)
{
distance.inch=distance.inch-12.0;
++distance.feet;
}
printf("\nDistance=%d\'-%.1f\"",distance.feet,distance.inch);
getch();
}