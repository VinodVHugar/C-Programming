#include<stdio.h>
int main()
{
    int basic_salary,exp;
    float bonus;
    printf("Enter the basic_salary and exp\n");
    scanf("%d%d",&basic_salary,&exp);
    switch(exp)
    {
        case 1 ... 7:bonus=0.1*basic_salary;
            printf("bonus=%f\n",bonus);
            break;
        case 8 ... 10:bonus=0.2*basic_salary;
            printf("bonus=%f\n",bonus);
            break;
        case 11 ... 15:bonus=0.3*basic_salary;
            printf("bonus=%f\n",bonus);
            break;
        default:bonus=0.4*basic_salary;
            printf("bonus=%f\n",bonus);
            break;
    }
    return 0;
}

