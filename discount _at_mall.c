#include<stdio.h>
int main()
{
    int cost_mw,cost_wt,cost_kd,total,discountedTotal;
    printf("enter cost for menss wear,womens wear,and kids wear\n");
    scanf("%d%d%d",&cost_mw,&cost_wt,&cost_kd);
    total=((cost_mw)*90/100) +(cost_wt)*80/100 +(cost_kd)*75/100;
    if(total>1250)
    {
        discountedTotal=total-250;
        printf("your new discounted total is=%d",discountedTotal);
    }
    else
        printf("you total is=%d",total);
    return 0;
}
