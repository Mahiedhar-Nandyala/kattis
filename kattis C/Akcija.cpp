#include<stdio.h>
#include<algorithm>
int main()
{
    long long int n,i,c=0,a[100000];
    long long int s=0;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
        scanf("%lld",&a[i]);
    std::sort(a,a+n);
    for(i=n-1;i>=0;i--)
    {
        if(c==2)
        {
            c=0;
            continue;
        }
        s=s+a[i];
        c++;
    }
    printf("%lld",s);
    return 0;
}
