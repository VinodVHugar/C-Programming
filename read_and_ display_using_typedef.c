#include<stdio.h>
typedef struct cricket_player
{
    char player_name[20];
    char team_name [20];
    float average;
    int highest_score,centuries,ODI_rank;
}KING;
KING read(KING );
void display(KING);
main()
{
    KING p1;
    p1=read(p1);
    display(p1);

}
KING read( KING p1)
{
    printf("\nEnter player name\n");
    scanf("%s",p1.player_name);
    printf("Enter team name\n");
    scanf("%s",p1.team_name);
    printf("Enter the average\n");
    scanf("%f",&p1.average);
    printf("Enter the highest score\n");
    scanf("%d",&p1.highest_score);
    printf("Enter total centuries\n");
    scanf("%d",&p1.centuries);
    printf("Enter ODI Rank\n");
    scanf("%d",&p1.ODI_rank);
    return p1;
}
void display(KING p1)
{
    printf("Player name=%s\n",p1.player_name);
    printf("team name=%s\n",p1.team_name);
    printf("Average=%f\n",p1.average);
    printf("Highest score=%d\n",p1.highest_score);
    printf("centuries=%d\n",p1.centuries);
    printf("ODI ranking=%d\n",p1.ODI_rank);

}



