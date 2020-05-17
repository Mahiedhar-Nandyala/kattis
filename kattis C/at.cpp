#include<stdio.h>
int main()
{
    int a[8],i,j,k,b[8],t;

    for(i=0;i<8;i++)
      scanf("%d",&a[i]);

    for(i=0;i<6;i++)
     for(j=i+1;j<6;j++)
      for(k=j+1;k<6;k++)
      {
        if((a[i]+a[j]+a[k])==a[6])
        {
            b[0] = a[i];
            b[1] = a[j];
            b[2] = a[k];
        }
        if((a[i]+a[j]+a[k])==a[7])
        {
            b[3] = a[i];
            b[4] = a[j];
            b[5] = a[k];
        }
      }
    for(i=0;i<3;i++)
     for(j=0;j<3;j++)
     {
      if(b[i]>b[j])
      {
          t = b[i];
          b[i] = b[j];
          b[j] = t;
      }
      if(b[i+3]>b[j+3])
      {
          t = b[i+3];
          b[i+3] = b[j+3];
          b[j+3] = t;
      }
     }
    for(i=0;i<6;i++)
       printf(" %d ",b[i]);
    return 0;
}
