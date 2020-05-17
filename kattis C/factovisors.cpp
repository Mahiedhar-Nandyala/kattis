#include<stdio.h>
int main()
{
    long long int a=0,b=0,k=1,y,fl=0,f=1,i;
    char t;
    double x;

    while(k)
    {
        a=0;
        b=0;
        fl=0;
        f=1;
        while(((t=getchar())!=EOF)&&t!=' ')
        {
            a=(a*10)+(long long int)(t-48);
        }
        if(t!=EOF)
        {
          while((t=getchar())!='\n')
          {
             b=(b*10)+(long long int)(t-48);
          }
          for(i=2;i<=a;i++)
          {
             f=f*i;
          }
          x=(double)f/b;
          y=(long long int)x;
          if(y==x)
             printf("%lld divides %lld!\n",b,a);
          else
             printf("%lld does not divide %lld!\n",b,a);
         }
         else
            k=0;
    }

    return 0;
}

