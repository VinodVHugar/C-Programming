#include<stdio.h>
#define ROW 10
#define COL 10
void read_2Darray(int matrix[ROW][COL],int r,int c);
void display_2Darray(int matrix[ROW][COL],int r,int c);
int main()
{
    int matrix[ROW][COL];
    int r,c;
    printf("Enter number of rows and columns\n");
    scanf("%d%d",&r,&c);
    read_2Darray(matrix,r,c);
    display_2Darray(matrix,r,c);
    return 0;
}
 void read_2Darray(int matrix[ROW][COL],int r,int c)
   {
    int i,j;
    printf("Enter the elements of 2D array\n");
    for ( i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        scanf("%d",&matrix[i][j]);
    }
   }
 void display_2Darray(int matrix[ROW][COL],int r,int c)
{
    int i,j;
    printf("Enter the elements of 2D array\n");
    for ( i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        printf("%d ",matrix[i][j]);
        printf("\n");


    }
}





