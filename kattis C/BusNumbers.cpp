#include<stdio.h>
#include<algorithm>
int main()
{
    int t,a[1000],i,in,fl=0,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    std::sort(a,a+n);
    for(i=0;i<n;i++)
    {
        if(a[i]+1==a[i+1])
        {
            if(fl==0)
              in=i;
            fl=1;
        }
        else
        {
            if(fl==1)
            {
                if(i-in>1)
                  printf("%d-%d ",a[in],a[i]);
                else
                  printf("%d %d ",a[in],a[i]);
                fl=0;

            }
            else
                printf("%d ",a[i]);
        }
    }
    return 0;
}
