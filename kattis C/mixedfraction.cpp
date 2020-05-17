#include<stdio.h>
int main()
{
    long long int a,b,n,i;
    while(1)
    {
      scanf("%lld",&a);
      scanf("%lld",&b);
      if(a==0 && b==0)
        break;
      for(i=1;(b*i)<=a;i++);
      i--;
      if(b*i==a)
        n=0;
      else
        n=a-(b*i);
      printf("%lld %lld / %lld\n",i,n,b);
    }
    return 0;
}
