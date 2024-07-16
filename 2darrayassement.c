#include<stdio.h>
#define ROW 10
#define COL 10
void read_2darray(int num[ROW][COL], int r, int c);
void display_2darray(int num[ROW][COL], int r, int c);
void row_sum(int num[ROW][COL], int r, int c);
void column_sum(int num[ROW][COL], int r, int c);
int diagonal_sum(int num[ROW][COL], int r, int c);
int main()
{
 int num[ROW][COL];
 int r, c,d;
 printf("Enter number of rows and columns of 2d array\n");
 scanf("%d%d",&r,&c);
 read_2darray(num, r,c);
 display_2darray(num,r,c);
 row_sum(num,r,c);
 column_sum(num,r,c);
 d=diagonal_sum(num,r,c);
 return 0;
}
void read_2darray(int num[ROW][COL], int r, int c)
{
 int i,j;
 printf("Enter elements of 2d array\n");
 for(i=0;i<r;i++)
 {
 for(j=0;j<c;j++)
 scanf("%d",&num[i][j]);
 }
}
void display_2darray(int num[ROW][COL], int r, int c)
{
 int i,j;
 printf("The elements of 2d array are\n");
 for(i=0;i<r;i++)
 {
 for(j=0;j<c;j++)
 printf("%d ",num[i][j]);
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
void column_sum(int num[ROW][COL], int r, int c)
{
 int sum[c];
 int i,j;
 for(i=0; i<c; i++)
 {
 sum[i]=0;
 for(j=0;j<r;j++)
 {
 sum[i]= sum[i]+num[j][i];
 }
 }
 printf("\ncolumn wise sum is\n");
 for(i=0;i<c;i++)
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
    dsum=dsum+num[i][j];
printf("the Diagonal Sum %d\n",dsum);
       {

        if (r>dsum)
          printf("The person is winner\n");
        else
          printf("the coumputer is the winner\n");
          return dsum;

    }


