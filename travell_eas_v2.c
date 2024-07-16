#include<stdio.h>
int main()
{
    int distance,days,charge_perkm,min_km_perday,min_travel,total,driver_allowance_perday,charge_perday;
    printf("enter the distance(in km)\n");
    scanf("%d",&distance);
    printf("enter the days you want to travel\n");
    scanf("%d",&days);
    switch(days)
{
    case 1 ... 3:min_km_perday=300;
    min_travel=min_km_perday*days;
    driver_allowance_perday=350;
    charge_perday=9.5;
    if(distance>=min_travel)
   {
    total=days*driver_allowance_perday+distance*charge_perkm;
        printf("total cost to pay=%d",total);
   }
        else
        {
            printf("distance is less than minimum travel per day\n");
            printf("either change number of days of travel or distance\n");
        }
            break;
    case 4 ... 6:min_km_perday=250;
    min_travel=min_km_perday*days;
        driver_allowance_perday=350;
    charge_perday=9.5;
    if(distance>=min_travel)
    {
        total=days*min_km_perday;
        printf("total cost to pay=%d",total);
    }
        else
           {
            printf("distance is less than minimum travel per day\n");
            printf("either change number of days of travel or distance\n");
            }

            break;
                case 7 ... 9:min_km_perday=250;
    min_travel=min_km_perday*days;
        driver_allowance_perday=350;
    charge_perday=9.5;
    if(distance>=min_travel)
    {
        total=days*min_km_perday;
        printf("total cost to pay=%d",total);
        }
        else
           {
            printf("distance is less than minimum travel per day\n");
            printf("either change number of days of travel or distance\n");
            }
            break;
                case 10 ... 100:
                    printf("more than 9 days cant be traveelled\n");
                    break;
default:printf("invalid days\n");
}
return 0;
}
