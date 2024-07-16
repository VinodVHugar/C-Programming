#include<stdio.h>
#define ROW 10
#define COL 10

void read_2darray(int matrix[ROW][COL], int r, int c);
void display_2darray(int matrix[ROW][COL], int r, int c);
void row_sum(int matrix[ROW][COL], int r, int c);
int diagonal_sum(int matrix[ROW][COL], int r, int c);

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

