#include<stdio.h>
#include<math.h>
int main()
{
    long long int n,s=0;
    int c,i=0,j,a[40];
    scanf("%lld",&n);
    while(n)
    {
        a[i]=n%2;
        n=n/2;
        i++;
    }
    c=0;
    for(j=i-1;j>=0;j--)
    {
        s+=(a[j]*pow(2,c));
        c++;
    }
    printf("%lld",s);
    return 0;
}
