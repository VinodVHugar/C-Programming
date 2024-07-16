/* write a c program to find grade of a student in 4 subjects
author:vinod
usn:01fe21bme092
roll no : 431 */



#include<stdio.h>
int main()


{
    int m1,m2,m3,m4;
    float avg;
    printf ("enter 4 test marks \n");
    scanf ("%d%d%d%d",&m1,&m2,&m3,&m4);
    avg=(m1+m2+m3+m4)/4.0;
    printf("avg=%f\n",avg);
    if (avg>=80)
    {
        printf("distinction\n");

    }
    else if (avg>=60)
    {
        printf("first division\n");
    }
    else if (avg>=50)
    {
        printf("second division\n");
    }
    else if (avg>=40)
    {
        printf("pass\n");
    }
    else
    {
        printf("fail\n");
    }
    return 0;
}
