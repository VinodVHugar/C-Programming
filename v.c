#include<stdio.h>
#define ROW 10
#define COL 10

void read_2darray (int matrix[ROW][COL], int r, int c);
void display_2darray (int matrix[ROW][COL], int r, int c);
void row_sum (int matrix[ROW][COL], int r, int c);
int diagonal_sum (int matrix[ROW][COL], int r, int c);

int main()
{
        int matrix[ROW][COL];
        int r, c,d;
        printf("Enter number of rows and columns of 2d array\n");
        scanf("%d%d",&r,&c);
        read_2darray(matrix, r,c);
        display_2darray(matrix,r,c);
        row_sum(matrix,r,c);
        d=diagonal_sum(matrix,r,c);
        return 0;
}
void read_2darray(int matrix[ROW][COL], int r, int c)
{
        int i,j;
        printf("Enter elements of 2d array\n");
        for(i=0;i<r;i++)
        {
                for(j=0;j<c;j++)
                    scanf("%d",&matrix[i][j]);
        }
}
void display_2darray(int matrix[ROW][COL], int r, int c)
{
        int i,j;
        printf("The elements of 2d array are\n");
        for(i=0;i<r;i++)
        {
                for(j=0;j<c;j++)
                    printf("%d ",matrix[i][j]);
                printf("\n");
        }
}
void row_sum(int num[ROW][COL], int r, int c)
{
        int sum[r];
        int i,j; //high=0;
        for(i=0;i<r;i++)
        {
                sum[i]=0;
                for(j=0;j<c;j++)
                {
                        sum[i]= sum[i]+num[i][j];
                }
        }
        printf("Row wise sum is\n");
        for(i=0;i<r;i++)
        {
                printf("%d ", sum[i]);
        }
}
int diagonal_sum(int num[ROW][COL], int r, int c)
{
        int i,j,dsum=0;
         for(i=0;i<r;i++)
        {
                for(j=0;j<c;j++)
                        if(i==j)
                            dsum = dsum + num[i][j];
        }
        printf("Diagonal Sum is: %d\n",dsum);
        if (diagonal_sum<row_sum)
    printf("Person is the winner");
    else
    printf("Computer is the winner");
        return dsum;
}



