#include<stdio.h>
long int mult3(long int);
long int xp;
int main()
{
    long int n,i,nb,t1,r=0,s=0,c=1;
    long int t;
    scanf("%ld",&n);
    while(n)
    {
        scanf("%ld",&nb);
    if(nb<3)
    {
            if(nb==1)
            {
             scanf("%ld",&t);
             r=0;
            }
            else if(nb==2)
            {
                scanf("%ld",&t);
                scanf("%ld",&t1);
                r=t+t1;
            }
    }
    else
    {
     if(nb%3==0)
        r=mult3(nb);
     else
     {
         r=mult3(nb-(nb%3));
         if((nb%3)==1)
         {
          scanf("%ld",&t);
          r=r+xp+t;
         }
         else if((nb%3)==2)
         {
          scanf("%ld",&t);
          scanf("%ld",&t1);
          t=t+t1;
          r=r+t;
          r=r+xp+t;
         }
     }
    }
      printf("%ld",r);
      n--;

  }
    return 0;
}
long int mult3(long int nb)
{
    long int i,t,c=1,s=0,r=0;
      for(i=0;i<nb;i++)
        {
          scanf("%ld",&t);
          if(c<=2)
          {
              s=s+t;
              if(c==2)
              {
                r=r+s;
              }
              c++;
          }
          else if(c==3)
          {
              r=r+s;
              s=s+t;
              xp=s;
              r=r+t;
              c++;
          }
          else if(c>3)
          {
           s=0;
           c=2;
           s=s+t;
          }
        }
        return r;
}
