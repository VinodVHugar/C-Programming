/*write a c program to find the area of circumference of the circle
Author:Vinod
USN:01fe21bme092
Roll:431*/

#include<stdio.h>
main()
{
    float radius;
    float area,cir;
    printf("Enter the radius of the circle\n ");
    scanf("%f",&radius);
    area=3.142*radius*radius;
    cir=2*22.0/7.0*radius;
    printf("area of circle=%f\n",area);
    printf("circumference of circle=%f\n",cir);
}

