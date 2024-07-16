/*write a c program to find the average of three subjects
Author:vinod
USN:01fe21bme092
Roll:431*/


#include<stdio.h>
main()
{
    float phy,math,chem;
    float sum,avg;
    printf("Enter the marks for three subject\n");
    scanf("%f%f%f",&phy,&math,&chem);
    sum=phy+math+chem;
    avg=sum/3;
    printf("Average of 3 subjects=%0.1f\n",avg);

}
