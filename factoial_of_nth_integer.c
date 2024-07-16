#include<stdio.h>
int fact(int n);
int main()
{
    int n,f;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    f=fact(n);
    printf("Factorial=%d\n",f);
    return 0;
}
int fact(int n)
{
    int f=1,i;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
return f;
}

