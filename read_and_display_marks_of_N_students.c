#include<stdio.h>
int main()
{
    int total,n,i,marks;
    float avg;
    printf("enter number of students\n");
    scanf("%d",&n);
    i=1;
    total=0;
    while(i<=n)
    {
        printf(" enter marks\n");
        scanf("%d",&marks);
        printf("marks=%d\n",marks);
        total=total+marks;
        i++;
        avg=(float) total/n;
    }
    printf("class avg %0.2f\n",avg);
    return 0;
}

