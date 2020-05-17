#include<stdio.h>
void mov(int,int,int);
int s[20][20];
int X,Y,a,b;
int main()
{
    int i,j,d,spi,spj,k=1;

    while(k)
    {

        scanf("%d",&a);
        scanf("%d",&b);
        getchar();
        if(a!=0 && b!=0)
        {
          for(i=0;i<b;i++)
          {
            for(j=0;j<a;j++)
            {
              scanf("%c",&s[i][j]);
              if(s[i][j]=='*')
              {
                  spi=i;
                  spj=j;
              }
            }
            getchar();
          }
         if(spi==0)
            d=3;
          else if(spi==a-1)
            d=1;
          else if(spj==0)
            d=2;
          else
            d=0;
          mov(spi,spj,d);
          s[X][Y]='&';
          printf("HOUSE %d\n",k);
          for(i=0;i<b;i++)
          {
            for(j=0;j<a;j++)
            {
               printf("%c",s[i][j]);
            }
            printf("\n");
          }
          k++;
        }
        else
          k=0;
    }
    return 0;
}
void mov(int x,int y,int d)
{
    int i;
    if(d==2)
    {
        for(i=y+1;s[x][i]=='.';i++);
        if(s[x][i]=='/')
          mov(x,i,1);
        else if(s[x][i]=='\\')
           mov(x,i,3);
        else if(s[x][i]=='x')
        {
            X=x;
            Y=i;
        }
    }
    else if(d==0)
    {
        for(i=y-1;s[x][i]=='.';i--);
        if(s[x][i]=='/')
           mov(x,i,3);
        else if(s[x][i]=='\\')
           mov(x,i,1);
        else if(s[x][i]=='x')
        {
            X=x;
            Y=i;
        }
    }
    else if(d==1)
    {
        for(i=x-1;s[i][y]=='.';i--);
        if(s[i][y]=='/')
            mov(i,y,2);
        else if(s[i][y]=='\\')
            mov(i,y,0);
        else if(s[i][y]=='x')
        {
            X=i;
            Y=y;
        }
    }
    else if(d==3)
    {
        for(i=x+1;s[i][y]=='.';i++);
        if(s[i][y]=='/')
            mov(i,y,0);
        else if(s[i][y]=='\\')
            mov(i,y,2);
        else if(s[i][y]=='x')
        {
            X=i;
            Y=y;
        }
    }

}
