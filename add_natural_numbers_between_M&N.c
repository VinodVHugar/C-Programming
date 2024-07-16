#include<stdio.h>
int main()
{
    int m,n,i,sum;
    printf("enter m & n value\n");
    scanf("%d%d",&m,&n);
    i=m;
    sum=0;
    while(i<=n)
    {
        printf("%d\t",i);
        sum=sum + i;
        i++;
    }
    printf("\n sum of numbers between range is %d\n",sum);
    return 0;
}

