/*write a c program to print "have a nice weekend" if the current day is Friday(F) otherwise print "have a nice day " */


#include<stdio.h>
main()
{
    char day;
    printf("enter the day\n");
    scanf("%c",&day);
    if(day=='F'|| day =='f')
    {
        printf("have a nice weekend\n");

    }
    else
    {
        printf("have a nice day\n");
    }
}

