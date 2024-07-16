
#include<stdio.h>
#include<math.h>

main()
{
    int x1,x2,y1,y2;
    float distance,time;

    printf("enter the values of coordinates: x1,x2,y1,y2\n");
    scanf("%d%d%d%d",&x1,&x2,&y1,&y2);

    distance=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    time=(distance/2);

    printf("the distance between sohan and mohan is=%f km\n",distance);
    printf("the time taken is %f hrs\n",time);
    if(time< 1)
    {
        printf("Yes,Mohan can reach Sohan in one hour\n");
    }
    else
    {
        printf("No,Mohan cannot reach Sohan in one hour\n");
    }
}
