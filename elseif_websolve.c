/* A software company named Websolve has 1000 employees.
The company decided to give bonus to all of its employees as per the following experience.
Calculate the bonus amount for the employees*/



#include<stdio.h>
main()
 {
     float basic_salary,bonus;
     int experience;
     printf("enter the basic_salary and experience\n");
     scanf("%f%d","&basic_salary,&experience\n");
     if(experience>=1 && experience<=7)
     {
         bonus=basic_salary*0.1;

     }
     else if(experience>= 0)
     {
         bonus=basic_salary*0.2;
     }
     else
     {
         bonus=0;
     }
     printf("bonus=%f\n",bonus);
 }
