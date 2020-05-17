#include<stdio.h>
int main()
{
    int n,i;

    scanf("%d",&n);

    if(n<=20)
    {
        printf("single %d",n);
    }
    else
    {
      while(n>0)
      {
        if(n>3)
        {
           for(i=20;i>0;i--)
           {
            if((i*3)<=n)
            {
                printf("triple %d\n",i);
                n=n-(i*3);
                i=21;
            }
           }
        }
        else if((n!=0)&& (n>2))
        {
          for(i=20;i>0;i--)
          {
            if((i*2)<=n)
            {
                printf("double %d",i);
                n=n-(i*2);
            }
          }
        }
        else {}
         for(i=20;i>0;i--)
         {
           if(i<=n)
           {
               printf("single %d",i);
               n=n-i;
           }
        }
      }
    }
    if(n==0)
        printf("successfull");
    return 0;
}
