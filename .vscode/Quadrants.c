#include<stdio.h>
int main()
{
    int p1,p2;
    printf("Eneter the points");
    scanf("%d %d",&p1,&p2);

    if(p1>0 && p2>0)
    {
        printf("point (%d %d) lies in first quadrant");
    }
    else if(p1<0 && p2>0)
    {
        printf("point (%d %d) lies in second quadrant");
    }
    else if(p1<0 && p2<0)
    {
        printf("point (%d %d) lies in second quadrant");
    }
    else if(p1>0 && p2<0)
    {
        printf("point (%d %d) lies in second quadrant");
    }
    else (p1==0 && p2==0)
    {
        printf("point (%d %d) lies at origin");
    }
    return 0;
}
