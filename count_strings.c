#include<stdio.h>
int count_char(char name[20])
{
    int count=0,i=0;
    while(name[i]!='\0')
    {
        count++;
        i++;
    }
    return count;
}
int main ()
{
    char name[20];
    int count ;
    printf("Enter your name\n");
    gets(name);
    count=count_char(name);
    printf("Number of character in name %d\n",count);
    return 0;
}
