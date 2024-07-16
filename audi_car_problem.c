#include<stdio.h>
main()
{
    float petrol_price,fuel_in_litres,distance;
    printf("enter the petrol price\n");
    scanf("%f",&petrol_price);
    fuel_in_litres=1066.64/petrol_price;
    distance=fuel_in_litres*14;
    printf("distance travelled by car =%f\n",distance);
    if(distance>=100)
    {
        printf("yes.car can reach belguam.\n");

    }
    else
    {
        printf("no.car cannot reach belguam.\n");
    }
}
