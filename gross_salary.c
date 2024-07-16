/*Write c program for the following
Rajesh's basic salary is input through keyboard,
his dearness allowance is 40% of basic salary
and house rent allowance is 20% of basic salary
write a program to calculate his gross salary

author:vinod
usn:01fe21bme092
roll:431*/

#include<stdio.h>
main()
{
    float basic_salary;
    float DA,HRA,gross_salary;
    printf("enter the basic salary\n");
    scanf("%f",&basic_salary);
    DA=(0.40*basic_salary);
    HRA=(0.20*basic_salary);
    gross_salary=(basic_salary+DA+HRA);
    printf("gross salary of ramesh=%0.2f\n",gross_salary);
}
