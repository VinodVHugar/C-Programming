/*Write a c program to find the area of circle
Author:VINOD
USN:01FE21BME092
Roll:431*/


#include<stdio.h>
float area(float n1);//function prototype
int main()
{
    float r,a;
    printf("enter value of r\n");
    scanf("%f",&r);
    a=area(r); //function call
    printf("area=%0.2f\n",a);
    return 0;

}
   float area(float n1)//function definition
{
    float ar;
    ar=3.142*n1*n1;
    return ar;
}
