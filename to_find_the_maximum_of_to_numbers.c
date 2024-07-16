/*write c program to find the maximum of to numbers
author:vinod
usn:01fe21bme092
roll:431*/


#include<stdio.h>
main()
{
    int num1,num2;
    printf("enter two different values\n");
    scanf("%d%d",&num1,&num2 );
    if(num1>num2)
    {
        printf("%d is greater than %d\n",num1,num2);

    }
    else
    {
      printf("%d is greater than %d\n",num2,num1);
    }
}



