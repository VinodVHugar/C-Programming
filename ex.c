#include<stdio.h>
void read(int roll_no[],int n)
{
    int i;
    for(i=0;i<n;i++)
      {
        scanf("%d ",&roll_no[i]);
      }
}
void display(int roll_no[],int n)
{
     int i;
    for( i=0;i<n;i++)
    {
        printf("%d ",roll_no[i]);
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

