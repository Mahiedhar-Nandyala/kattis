#include<stdio.h>
int main()
{
    int m,n,x[3],t,t1,c1=0,y[3],c=0,i,p,q;
    for(i=0;i<3;i++)
      scanf("%d%d",&x[i],&y[i]);
    m=0;
    n=0;
    for(i=1;i<3;i++)
    {
        if(x[m]==x[i])
             c++;
         else
            t=i;
         if(y[n]==y[i])
             c1++;
         else
            t1=i;
    }
    if(c==0)
      p=x[m];
    else
      p=x[t];
    if(c1==0)
      q=y[n];
    else
      q=y[t1];
    printf("%d %d",p,q);
    return 0;
}
