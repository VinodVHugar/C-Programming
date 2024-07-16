
#include<stdio.h>
typedef struct cricket_player
{
    char player_name[20];
    char team_name [20];
    float average;
    int highest_score,centuries,ODI_rank;
}PLR;
void read(PLR p[],int n);
void display(PLR p[],int n);
main()
{
    PLR p[11];
    int n;
    printf("Enter the player name\n");
    scanf("%d",&n);
    read(p,n);
    display(p,n);
    highest_batting_average(p,n);

}
void read( PLR p[],int n)
{
    int i;
    for(i=0;i<n;i++)
{
    printf("\nEnter player name:");
    scanf("%s",p[i].player_name);
    printf("Enter team name\n");
    scanf("%s",p[i].team_name);
    printf("Enter the average\n");
    scanf("%f",&p[i].average);
    printf("Enter the highest score\n");
    scanf("%d",&p[i].highest_score);
    printf("Enter total centuries\n");
    scanf("%d",&p[i].centuries);
    printf("Enter ODI Rank\n");
    scanf("%d",&p[i].ODI_rank);
    return p;
}
}
void display(PLR p[],int n)
{
     int i;
    for(i=0;i<n;i++)
  {   printf("\Enter player name\n");
    printf("Player name:%s\n",p[i].player_name);
    printf("team name:%s\n",p[i].team_name);
    printf("Average:%f\n",p[i].average);
    printf("Highest score:%d\n",p[i].highest_score);
    printf("centuries:%d\n",p[i].centuries);
    printf("ODI ranking:%d\n",p[i].ODI_rank);

  }
}
void highest_batting_average(PLR p[],int n)
{
    int i, index=0;
    float h;
    h=p[0].average;
    for(i=1;i<n;i++)
    {
        if(p[i].average>h)
        {
            h=p[i].average;
            index=i;
        }
    }
    printf(" The player who is having highest batting average\n");
    printf("Player name:%s\n",p[index].player_name);
    printf("team name:%s\n",p[index].team_name);
    printf("Average:%f\n",p[index].average);
    printf("Highest score:%d\n",p[index].highest_score);
    printf("centuries:%d\n",p[index].centuries);
    printf("ODI ranking:%d\n",p[index].ODI_rank);


}




