#include<stdio.h>
int main()
{
    int num=100;
    int*ptr;
    ptr=&num;
    printf("value of num=%d\n",num);
    printf("Address of num variable=%x\n",&num);
    printf("Address of integer pointer=%x\n",ptr);
    printf(" value at num via ptr=%d\nSN",*ptr);
    printf("Address of integers pointer=%x\n",&ptr);
}
