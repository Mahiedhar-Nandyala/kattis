#include<stdio.h>
int main()
{
    long long int r,x,n;
    int i,s=0,s1=0;
  while(1)
  {
    scanf("%lld",&n);
    if(n==0)
        break;
    x=n;
    s1=0;
    while(x)
    {
        s1+=(x%10);
        x=x/10;
    }
    for(i=11;;i++)
    {
        s=0;
        r=n*i;
        while(r)
        {
            s+=(r%10);
            r=r/10;
        }
        if(s==s1)
           {
               printf("%d\n",i);
               break;
           }
    }
  }
    return 0;
}
