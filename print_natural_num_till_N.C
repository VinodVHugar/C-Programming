#include<stdio.h>
int main()
{
    int N,i=1;
    printf("Enter the value for N\n");
    scanf("%d",&N);
    while(i<=N)
    {
        printf("%d\t",i);
        i=i+1;
    }
    return 0;
}

