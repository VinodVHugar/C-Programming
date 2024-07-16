#include<stdio.h>
int main()
{
    int amt;
    printf("Enter the amount received from parent\n");
    scanf("%d",&amt);
    if(amt>=10000)
        printf("travel by  plane");
    else
        printf("travel by train");
    return 0;
}
