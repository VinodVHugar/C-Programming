#include<stdio.h>
int main()
{
    int n,i,sum;
    printf("enter n value\n");
    scanf("%d",&n);
    i=1;
    sum=0;
    while(i<=n)
    {
        sum=sum + i;
        i++;
    }
    printf("sum of %d natural numbers is %d\n",n,sum);
    return 0;
}
