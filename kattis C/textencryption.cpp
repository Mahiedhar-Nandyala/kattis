#include<stdio.h>
#include<string.h>
int main()
{
    char a[10000],b[10000],t;
    int i,bc=0,k=1,n,m=0,l,x;
    while(k)
    {
      bc=0;
      m=0;
      scanf("%d",&n);
      getchar();
      if(n!=0)
      {
        scanf("%[^\n]",a);
        l=strlen(a);
        l--;
        /* THIS DOES NOT WORK PROPERLY BCOS OF NOT COUNTING SPACES IN STRING */
        for(i=0;a[i]!='\0';i++)
        {
          if(a[i]!=' ')
          {
            if(bc<=l)
            {
              printf("  bc = %d  ",bc);
              x=a[i];
              if(x>96 && x<123)
                 b[bc]=(x-32);
              else
                b[bc]=x;
              bc=bc+n;
            }
            else
            {
               m++;
               bc=m;
               i--;
            }
          }
          else
            l--;
        }
       printf("%s\n",b);
      }
      else
        k=0;
    }
    return 0;
}
