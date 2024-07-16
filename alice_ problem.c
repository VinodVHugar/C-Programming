#include<stdio.h>
int main()
{
   float x0,y0,n,d,xc,to,tc;
  printf("enter the values for  x0,y0,n,d,xc\n");
  scanf("%d%d%d%d%d",&x0,&y0,&n,&d,&xc);
  to=x0+(d-n)*y0;
  tc=xc*d+10;
  if(to<=tc)
  {
        printf("choose online taxi\n");

  }
  else if(tc<to)
  {
    printf("choose classic taxi\n");

  }
  else
  {
      printf("invalid input\n");
  }

  return 0;



}
