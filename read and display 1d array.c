#include <stdio.h>
void read_Array(int arr[], int n);
void display_Array(int arr[],int n);
int main()
{
    int arr[10];

    read_Array(arr,10);
    display_Array(arr,10);

    return 0;
}
void read_Array(int a[], int n)
{
    int i =0;

    printf("Enter elements\n");

    for(i=0; i<n; i++)
    {
        printf("Enter a[%d]:",i);
        scanf("%d",&a[i]);
    }
}
void display_Array(int a[],int n)
{
    int i =0;

    printf("\n Elements are: \n");

    for(i=0; i<n; i++)
    {
        printf("%d %d\n",i,a[i]);
    }
    printf("\n");
}


