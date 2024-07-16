#include<stdio.h>
int main()


{
    char gender ;
    float basic,bonus,gross;
    printf ("enter the gender and basic of employee\n");
    scanf("%c%f",&gender,&basic);
    switch(gender)
    {
        case 'm':
         case'M':if(basic<10000)
         {
             bonus=basic*0.07;
         }
         else
         {
             bonus=basic*0.05;
         }
         gross=basic + bonus;
         printf("bonus=%f\n gross=%f\n",bonus,gross);
         break;
          case'F':
          case'f':if (basic<10000)
          {
              bonus=basic*0.12;
          }
          else
          {
              bonus=basic*0.1;
          }
          gross=basic+bonus;
          printf("bonus=5f\n gross=%f\n",bonus,gross);
          break;
          default: printf("invalid input for grades and basic\n");
          break;
    }
    return 0;
    }




