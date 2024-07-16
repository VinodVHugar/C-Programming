#include<stdio.h>
typedef struct passenger_information
{
    char passenger_name[30];
    char address[30];
    char source[30];
    int ticket_price;
}P;
void read (P*ptr,int n);
void display (P*ptr,int n);
void source_to_find(P*ptr,int n);
void total_amt(P*ptr,int n);
main()
{
    P P[100];
    int n;
    printf("Enter the number of passengers\n");
    scanf("%d",&n);
    read(P,n);
    display(P,n);
    source_to_find(P,n);
    total_amt(P,n);
}
void read(P*ptr,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter passenger name\n");
        scanf("%s",ptr->passenger_name);
        printf("Enter address\n");
        scanf("%s",ptr->address);
        printf("Enter source\n");
        scanf("%s",ptr->source);
        printf("Enter ticket price\n");
        scanf("%d",&ptr->ticket_price);
        printf("--------------------------------------\n");

    }
}
void display(P*ptr,int n)
{
     int i;
    for(i=0;i<n;i++)
    {printf("--------------------------------------------\n");
    printf("Passenger name:%s\n",ptr->passenger_name);
    printf("address:%s\n",ptr->address);
    printf("source:%s\n",ptr->source);
    printf("Ticket price:%d\n",ptr->ticket_price);
    }
}
void  source_to_find(P*ptr,int n)
{
    char SOURCE[20];
    int count=0;
    int i;
    printf("\nEnter the source name\n");
    scanf("%s",SOURCE);
    for(i=0;i<n;i++)
    {
        if(strcmp(ptr[i].source,SOURCE)==0)
        {
            count++;
        }

    }
    printf("Total number of passengers from %s=%d\n",SOURCE,count);
}
void total_amt(P*ptr,int n)
{
    int i;
    int amt=0;
    for(i=0;i<n;i++)
    {
        amt=amt+ptr[i].ticket_price;
    }
    printf("Total amount collected is %d\n",amt);

}

