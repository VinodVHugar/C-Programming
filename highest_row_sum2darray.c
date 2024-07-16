// READ 2D ARRAY, DISPLAY 2D ARRAY, roe wise sum 2D ARRAY,column wise sum 2D ARRAY,highest in row wise sum 2D ARRAY,highest in column wise sum 2D ARRAY,diagonal sum matrix 2D ARRAY
#include<stdio.h>
#define ROW 10
#define COL 10
void read_2darray(int num[ROW][COL], int r, int c);
void display_2darray(int num[ROW][COL], int r, int c);
void row_sum(int num[ROW][COL], int r, int c);
void column_sum(int num[ROW][COL], int r, int c);
void row_sum_highest(int num[ROW][COL], int r, int c);
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
 row_sum_highest(num,r,c);

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
void row_sum_highest(int num[ROW][COL], int r, int c)
{
 int sum[r],high;
 int i,j;
 for(i=0;i<r;i++)
 {
 sum[i]=0;
 for(j=0;j<c;j++)
 {
 sum[i]= sum[i]+num[i][j];
 }
 }
 printf("\nRow wise sum is\n");
 for(i=0;i<r;i++)
 {
 printf("%d ", sum[i]);
 }
 for(i=0;i<r;i++)
 {
 if(high<sum[i]);
 high=sum[i];
 }
 printf("\nHighest in Row wise sum is %d\n", high);
}
