#include<stdio.h>

main()
{
    float D,N,X,Y,R,Total_bill_amount;
    printf ("Enter the distance\n");
    scanf("%f",&D);
    printf("Enter 1st N kms\n");
    scanf("%f",&N);
    printf("Enter the cost per N km\n");
    scanf("%f",&X);
    printf("Enter the cost after first N kms\n");
    scanf("%f",&Y);
    printf("Enter the rupees in wallet\n");
    scanf("%f",&R);

    Total_bill_amount=(X+(D-N)*Y);
    printf("Total bill amount=%f\n",Total_bill_amount);

    if(Total_bill_amount<=R)
    {
        printf("Alice shall reach the office\n");
    }
    else
    {
        printf("Alice shall not reach the office\n");
    }
}
