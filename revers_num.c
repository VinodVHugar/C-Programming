#include<stdio.h>
int reverse(int n);
int main()
{
    int n,r;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    r=reverse(n);
    printf("Reverse=%d\n",r);
    return 0;
}
int reverse(int n)
{
    int rev=0;
    while(n>0)
    {
        rev=(rev*10)+n%10;
        n=n/10;
    }
return rev;
}
