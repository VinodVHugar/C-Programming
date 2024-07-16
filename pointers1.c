#include<stdio.h>
void read(int*p,int n)
{
    int i;
    for( int i=0;i<n;i++)
      {
        scanf("%d",p);
        p++;
      }
}
void display(int*p,int n)
{
     int i;
    for( int i=0;i<n;i++)
    {
        printf("%d\n",*p);
        p++;
    }
}
int main()
{
    int roll_no[50],n;
    printf("Enter the n\n");
    scanf("%d",&n);
    printf("Enter the array elements\n");
    read(roll_no,n);//function call
    printf("Entered the elements are\n");
    display(roll_no,n);//function call
}


