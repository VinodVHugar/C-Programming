/*Write a c program to find the area of triangle
Author:VINOD
USN:01FE21BME092
Roll:431*/


#include<stdio.h>
int sum ( int a,int b,int c);
float avg(int a,int b,int c);//function prototype
int main()
{
    int n1,n2,n3,s;
    float a;
    printf("enter value of 3 integers \n");
    scanf("%d%d%d",&n1,&n2,&n3);
    s=sum(n1,n2,n3);
    a=avg(n1,n2,n3); //function call
    printf("sum=%0.2d\n averge=%0.2f\n",s,a);
    return 0;

}
   float avg(int a,int b,int c)//function definition
   {
       int avg;
       avg=(a+b+c)/3.0;
       return avg;
   }
   int sum(int a,int b,int c)//function definition
{
    int sum;
    sum=a+b+c;
    return sum;
}


