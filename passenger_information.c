#include<stdio.h>
typedef struct passenger_information
{
    char passenger_name[20];
    char Address[20];
    char Destination[20];
    int ticket_price;
}P;
void read(P*ptr,int n);
void display(P*ptr,int n);
void source_find(P*ptr,int n);
void Total_amount(P*ptr,int n);
main()
{
    P*ptr P[100];
    int n;
    printf("Enter the number of passengers\n");
    scanf("%d",&n);
    read(p,n);
    display(p,n);
    source_find(p,n);
    total_amount(p,n);
}
void read(P*ptr,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter the passenger name\n");
        scanf("%s",ptr->passengers_name);
        printf("Enter Address \n");
        scanf("%s",ptr->Address);
        printf("Enter Destination\n");
        scanf("%s",ptr->Destination);
        printf("Enter the ticket price \n");
        scanf("%d",ptr->ticket_price);
        P++;
    }
}
void display(P*ptr,int n)


