#include<stdio.h>
#include<algorithm>
int main()
{
    long long int t,c=0,cnt=1,g,a[1001]={0},i;
    scanf("%lld",&t);
    while(t)
    {
        printf("Case #%d: ",cnt);
        scanf("%lld",&g);
        for(i=0;i<g;i++)
        {
          scanf("%lld",&a[i]);
        }
        std::sort(a,a+g);
        for(i=0;i<g;i++)
        {
          if(a[i]==a[i+1])
          {
            c++;
          }
          else
          {
              if(c==0)
                    printf("%lld\n",a[i]);
              c=0;
          }
        }
        t--;
        cnt++;
    }
    return 0;
}
