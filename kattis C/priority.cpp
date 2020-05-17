#include<stdio.h>
int main()
{
    int wt,ta,m,i,t,j,tat[5],o[5],p[5]={2,1,3,4,5},bt[5]={3,5,2,5,5};
    for(j=4;j>=0;j--)
    {
      m=0;
      for(i=1;i<5;i++)
      {
        if(p[m]<p[i])
        {
            m=i;
        }
      }
      o[j]=m;
      p[m]=0;
    }
    for(i=0;i<5;i++)
    {
        t=0;
        for(j=0;j<=i;j++)
        {
            t=t+bt[o[j]];
        }
        tat[i]=t;
    }
    wt=0;
    ta=0;
    for(i=0;i<4;i++)
    {
      wt+=tat[i];
      ta+=tat[i];
    }
    ta+=tat[i];
    printf("\nAverage waiting time = %f ",(wt/5.0));
    printf("\nAverage turn around time = %f ",(ta/5.0));
    return 0;
}
