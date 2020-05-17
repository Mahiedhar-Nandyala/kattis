#include<stdio.h>
#include<math.h>

int main()
{
    int h,v,re;
    double pi,r,rad;
    scanf("%d%d",&h,&v);
    rad = v*asin(1)/90;
    r=h/sin(rad);
    re=(int)ceil(r);
    printf("%d",re);
    return 0;
}
