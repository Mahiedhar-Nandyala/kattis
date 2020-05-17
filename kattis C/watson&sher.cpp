#include<stdio.h>
int main()
{
    long long int s=0,a,b,r,t;
    scanf("%lld",&t);
    while(t)
    {
      s=0;
      scanf("%lld",&a);
      b=a/9;
      r=a%9;
      while(b)
      {
          s=s+9;
          b--;
      }
      s=s+r+1;
      printf("%lld",s);
      t--;
    }
    return 0;
}
