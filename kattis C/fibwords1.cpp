#include<stdio.h>
long long int ln(long long int);
long long int dvd(long long int);
long long int k,s[100000];
int main()
{
    long long int n,i;
    char a='N',b='A';
    scanf("%lld",&n);
    s[n]=ln(n);
    scanf("%lld",&k);
    i=dvd(n);
    if(i==1)
      printf("N");
    else if(i==2)
      printf("A");
    else
      printf("invalid !!!");

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
long long int ln(long long int n)
{
    if(n==1 || n==2)
        return 1;
    else
    {
      return (     (s[n-2]=ln(n-2))         +     (s[n-1]=ln(n-1))         );
       //return (ln(n-2)+ln(n-1));
    }
}
