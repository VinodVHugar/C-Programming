/*Write a c program to find the area of triangle
Author:VINOD
USN:01FE21BME092
Roll:431*/


#include<stdio.h>
float area(float h,float b);//function prototype
int main()
{
    float b,h,a;
    printf("enter value of height & base \n");
    scanf("%f%f",&h,&b);
    a=area(h,b); //function call
    printf("area=%0.2f\n",a);
    return 0;

}
   float area(float h,float  b)//function definition
{
    float ar;
    ar=0.5*h*b;
    return ar;
}

