#include<stdio.h>
#include<conio.h>
void main()
{
int playerTotal=0;
int teamTotal=0;
int score;
int numgames,player,bowler,game;
printf("How many games?\n");
scanf("%d",&numgames);
printf("How many players?\n");
scanf("%d",&player);
for(bowler=1;bowler<=3;bowler++)
{
for(game=1;game<=2;game++)
{
printf("\nEnter the score for game %d for bowler %d:",game,bowler);
scanf("%d",&score);
playerTotal+=score;
}
printf("\nThe average for bowler %d is:%d",bowler,playerTotal/2);
printf("\nThe total for the game is:%d",playerTotal);
teamTotal+=playerTotal;
}
getch();
}