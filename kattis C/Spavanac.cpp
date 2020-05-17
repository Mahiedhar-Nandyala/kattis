#include<stdio.h>
int main()
{
    int m,t,n;
    scanf("%d",&m);
    scanf("%d",&n);
    if(n>=45)
    {
        n=n-45;
    }
    else
    {
        t=45-n;
        n=60-t;
        if(m==0)
            m=24;
        m--;
    }
    printf("%d %d",m,n);
    return 0;
}
