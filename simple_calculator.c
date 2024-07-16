#include<stdio.h>
int main()
{
    char ch;
    int a,b,result;
    printf("enter an operator +,-,*,/ \n");
    scanf("%c",&ch);
    printf("enter two operants\n");
    scanf("%d%d",&a,&b);
    switch(ch)
    {
        case '+':
            result=a+b;
            break;
        case '-':
             result=a-b;
             break;
        case '*':
             result=a*b;
              break;
        case '/':
             result=a/b;
              break;
    }
    printf("result=%d\n",result);
    return 0;

}
