#include<stdio.h>
int main()
{
    long long int a,b;
    int k=1,t;
    while(k)
    {
        a=0;
        b=0;
        while(((t=getchar())!=EOF)&&t!=' ')
        {
            a=(a*10)+(t-48);
        }
        if(t!=EOF)
        {
          while((t=getchar())!='\n')
          {
             b=(b*10)+(t-48);
          }
          if(a>b)
            printf("%lld",a-b);
          else
            printf("%lld",b-a);
        }
        else
            k=0;
    }
    return 0;
}
