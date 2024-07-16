#include<stdio.h>
int fact(int n);
float permutation (int n,int,r);
float combination (int n, int r);
int main()
{
    int n,r;
    float npr,ncr;
    printf("enter the value of n&r\n");
    scanf("%d%d",&n,&r);
    //f=fact(n);
    npr=permutation(n,r);
    ncr=combination(n,r);
    //printf("factorial=%d\n",f);
}
