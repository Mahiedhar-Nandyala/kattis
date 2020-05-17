#include<stdio.h>
#include<cmath>
int main()
{
    double a,b,x,y,c,d,e,p,q;
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);
    scanf("%lf",&d);

    p=a-d;
    q=b-c;
    p=std::abs(p);
    q=std::abs(q);
    printf("%lf %lf",p,q);
    x=std::pow(p,e);
    y=std::pow(q,e);
    a=x+y;
    c=1/e;
    b=std::pow(a,c);
    printf("%lf",b);

    return 0;
}
