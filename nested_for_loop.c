#include<stdio.h>
int main()

{
    int i,j,n,m;
    printf("Enter for values for m\n");
    scanf("%d",&m);
    printf("Enter for values for n\n");
    scanf("%d",&n);
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
