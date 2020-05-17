#include<stdio.h>
#include<cmath>
int main()
{
    double a,b,s=0;
    scanf("%lf",&a);
    scanf("%lf",&b);
    if(a==0)
        s=1;
    else
       s=std::pow(2,a-1);
    printf("%.lf",s);
    return 0;
}
