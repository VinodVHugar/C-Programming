/*the marks obtained by a student in five different subjects are input
write a program to find out the aggregate marks and percentage marks
obtained by the student
assume that the maximum marks obtained by the student are 100
author:vinod
usn:01fe21bme092
roll:431*/


#include<stdio.h>
main()
{
    int m1,m2,m3,m4,m5,aggregate_marks;
    float percentage;
    printf("enter the marks of five subjects\n");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    aggregate_marks=m1+m2+m3+m4+m5;
    percentage=(float)aggregate_marks/500*100;
    printf("aggregate marks=%d\n",aggregate_marks);
    printf("percentage=%0.2f\n",percentage);
}
