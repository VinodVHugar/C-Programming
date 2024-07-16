#include<stdio.h>
typedef struct movie_details
{
    char movie_name[15],producer[15],director[15],production_house[15];
    int release_year;
}M;
M m[100],temp;
int n,i,j,f1=0,f2=0;
char DIRECTOR[15],PRODUCTION_HOUSE[15];
void read(M m[100],int n);
void display(M m[100],int n);
void sort_by_released_year(M m[100],int n);
void director(M m[100],int n);
void production_house(M m[100],int n);
int main()
{
    printf("Enter number of movies\n");
    scanf("%d",&n);
    read(m,n);
    sort_by_released_year(m,n);
    display(m,n);
    director(m,n);
    production_house(m,n);
return 0;
}
void read(M m[100],int n)
{
    for(i=0;i<n;i++)
    {
        printf("Enter the name of the Movie\n");
        scanf("%s",m[i].movie_name);
        printf("Enter the name of the producer\n");
        scanf("%s",m[i].producer);
        printf("Enter the name of the director\n");
        scanf("%s",m[i].director);
        printf("Enter the release year\n");
        scanf("%d",&m[i].release_year);
        printf("Enter the name of the Production House\n");
        scanf("%s",m[i].production_house);
    }
}
void display(M m[100],int n)
{
    for(i=0;i<n;i++)
    {printf("______________\n");
        printf("%s\n",m[i].movie_name);
        printf("%s\n",m[i].producer);
        printf("%s\n",m[i].director);
        printf("%d\n",m[i].release_year);
        printf("%s\n",m[i].production_house);}
        printf("______________\n");
}
void sort_by_released_year(M m[100],int n)
{
    for(i=0;i<n-1;i++)
        {for(j=0;j<n-i-1;j++)
        {if(m[j].release_year>m[j+1].release_year)
        {temp=m[j];
        m[j]=m[j+1];
        m[j+1]=temp;}}}
}
void director(M m[100],int n)
{
    printf("Enter the name of the Director\n");
    scanf("%s",DIRECTOR);
    for(i=0;i<n;i++)
        {if(strcmp(m[i].director,DIRECTOR)==0)
        {f1=1;
    printf("______________\n");
        printf("%s\n",m[i].movie_name);
        printf("%s\n",m[i].producer);
        printf("%s\n",m[i].director);
        printf("%d\n",m[i].release_year);
        printf("%s\n",m[i].production_house);}}
        if(f1==0)
            printf("Record not found\n");
        printf("______________\n");
}
void production_house(M m[100],int n)
{
    printf("Enter the name of the Production House\n");
    scanf("%s",PRODUCTION_HOUSE);
    for(i=0;i<n;i++)
        {if(strcmp(m[i].production_house,PRODUCTION_HOUSE)==0)
        {f2=1;
    printf("______________\n");
        printf("%s\n",m[i].movie_name);
        printf("%s\n",m[i].producer);
        printf("%s\n",m[i].director);
        printf("%d\n",m[i].release_year);
        printf("%s\n",m[i].production_house);}}
        if(f2==0)
            printf("Record not found\n");
        printf("______________\n");
}
