#include<stdio.h>
int main()
{
    float r,c,r1;
    scanf("%f",&r);
    scanf("%f",&c);
    r1=r-c;
    r1=r1*r1;
    r=r*r;
    c=r1/r;
    c=c*100;
    printf("%f",c);
    return 0;
}
