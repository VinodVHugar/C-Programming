/*write a c program to swap two integer numbers
author:vinod
usn:01fe21bme092
roll:431*/


#include<stdio.h>
main()
{
    int a,b,temp;
    printf("enter value for a and b\n");
    scanf("%d%d",&a,&b);
    printf("before swapping\n");
    printf("a=%d,b=%d\n",a,b);
    //swapping
    temp=a;
    a=b;
    b=temp;
    printf("after swapping\n");
    printf("a=%d,b=%d\n",a,b);

}
