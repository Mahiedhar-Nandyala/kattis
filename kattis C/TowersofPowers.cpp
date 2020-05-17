#include<stdio.h>
int main()
{
    unsigned long long int a,z,y,ac=0,x,i=0;
    scanf("%llu",&a);
    for(i=2;;i++)
    {
        ac=0;
        if(a%i==0)
        {
            x=i;
            z=a/i;
            while(z)
            {
                z=z/10;
                ac++;
            }
            y=(a/i)*ac;
            if(y==a)
            {
                printf("%llu",a/x);
                break;
            }
            else
                continue;
        }
    }
    return 0;
}



/*

    while((t=getchar())!='\n')
    {
       a[ac]=t;
       ac++;
    }
    if((a[0]-48)<i)
    {
       c=a[0]-48;
       pk=1;
    }

    for(j=pk;j<ac;j++)
    {
        t=1;
        y=i;
        x=a[j]-48;
        if(c==0)
        {
           if(x%i==0)
              printf("%d",x/i);
           else
           {
               printf("%d",x/i);
               c=x%i;
           }

        }
        else
        {
            z=(c*10)+x;
            if(z%i==0)
               printf("%d",z/i);
            else
            {
               printf("%d",z/i);
               c=z%i;
            }
        }
    }




------------------------------

    x=n;
    while(x)
    {
        x=x/10;
        l++;
    }
    x=n/l;
    printf("%llu",x);
----------------------------------

    x=n;
    while(x)
    {
        tmp=x%10;
        x=x/10;
        l++;
    }
    x=1;
    for(i=1;i<l;i++)
    {
        x=x*10;
    }
    tmp=tmp*x;
    t=n-x;
    y=t/l;

    while(1)
    {
        z=
    }

*/
