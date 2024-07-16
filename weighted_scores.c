#include<stdio.h>
int main()
{
    int a1,a2,a3,e1,e2,weighted_score;
    //a1 means assignment 1 and e1 means exam 1
    printf("enter marks in assessment 1,2 and 3 also enter marks exam 1and 2\n");
    //max marks is 100
    scanf("%d%d%d%d%d",&a1,&a2,&a3,&e1,&e2);
    weighted_score=((a1+a2+a3)*10/100)+(e1+e2)*35/100;
    if(weighted_score>40)
       {
        printf("your total marks=%d\n",weighted_score);
        printf("you are eligible to write final exam\n");
       }
     else
     {
         printf("your total marks=%d\n",weighted_score);
         printf("you are not eligible to write marks\n");
     }
     return 0;
}
