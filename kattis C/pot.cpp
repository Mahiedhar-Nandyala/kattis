#include<stdio.h>
long long int pow(long long int,int);
int main()
{
    long long int n,s=0,a;
    int p;

    scanf("%lld",&n);
    while(n)
    {
        scanf("%lld",&a);
        p=a%10;
        a=a/10;
        s=s+pow(a,p);
        n--;
    }
    printf("%lld",s);
    return 0;
}

long long int pow(long long int a,int p)
{
    int i;
    long long int r=1;
    for(i=1;i<=p;i++)
    {
        r=r*a;
    }
    return r;
}
