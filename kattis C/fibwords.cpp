#include<stdio.h>
long long int ln(long long int);
long long int dvd(long long int);
long long int k,s[100000];
int main()
{
    long long int n,i;
    char a='N',b='A';
    scanf("%lld",&n);
    scanf("%lld",&k);
    s[1]=1;
    s[2]=1;
    for(i=3;i<=n;i++)
    {
        s[i]=s[i-2]+s[i-1];
    }
    i=dvd(n);
    if(i==1)
      printf("N");
    else if(i==2)
      printf("A");
    return 0;
}
long long int dvd(long long int x)
{
  long long int p,q;
  p=s[x-2];
  q=s[x-1];
  if(p==1&&k==1)
  {
      return x-2;
  }
  else if(q==1)
  {
      return x-1;
  }
  else if(k<=p)
  {
    dvd(x-2);
  }
  else
  {
      k=k-p;
      dvd(x-1);
  }
}

