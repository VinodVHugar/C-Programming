#include<stdio.h>
int main()
{
    int a,b,c;
    printf(" enter 3 numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if (a>c)
        {
            printf("%d is greatest \n",a);
        }

    else
    {
        printf("%d is greatest \n",c);
    }
   }
    else if (b>c)
    {
        printf("%d is greatest\n",b);
    }
    else
    {
        printf("%d is greatest\n",c);
    }
    return 0;
}
