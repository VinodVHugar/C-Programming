#include<stdio.h>
void swap_numbers(int*aptr,int*bptr)
{
    int temp;
    int*tptr=&temp;
    *tptr=*aptr;
    *aptr=*bptr;
    *bptr=*tptr;
}

int main()
         {
             int a,b;
             printf("100 200\n");
             scanf("%d%d",&a,&b);
             printf("Number before swapping =%d,%d\n",a,b);
             swap_numbers(&a,&b);
             printf(" Number After swapping =%d,%d\n",a,b);
             return 0;
         }
