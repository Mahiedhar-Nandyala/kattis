#include<stdio.h>
int d[100][100];
void draw(int x1,int y1,int x2,int y2);
int main()
{
    int a[62][2];
    char t;
    int i=0,tm=48,kat=1,x,c=0,j=0,k,tmi;
    while(kat)
    {
        if((t=getchar())==EOF)
        {
            t='\n';
            kat=0;
        }
        if(t=='\n')
        {
            if(j==0)
            {
                tmi=i;
                for(i=0;i<c-1;i++)
                {
                   draw(a[i][0],a[i][1],a[i+1][0],a[i+1][1]);
                }
                for(i=0;i<tmi;i++)
                {
                    for(j=0;j<tm;j++)
                    {
                      printf("%c",d[i][j]);
                    }
                    printf("\n");
                }
                printf("\n");
                  for(k=0;k<62;k++)
                  {
                      a[k][0]=0;
                      a[k][1]=0;
                  }
                  i=-1;
                  c=0;
            }
            else
              d[i][j]='\0';
            i++;
            tm=j;
            j=0;
        }
        else
        {
          if(t!='.')
          {
              c++;
              if(t>=48 && t<=57)
              {
                  x=t;
                  x=x-48;
                  a[x][0]=i;
                  a[x][1]=j;
              }
              else if(t>=97 && t<=122)
              {
                  x=t;
                  x=x-87;
                  a[x][0]=i;
                  a[x][1]=j;
              }
              else if(t>=65 && t<=90)
              {
                   x=t;
                  x=x-29;
                  a[x][0]=i;
                  a[x][1]=j;
              }
          }
          d[i][j]=t;
          j++;
        }
    }
      for(i=0;i<c-1;i++)
        {
            draw(a[i][0],a[i][1],a[i+1][0],a[i+1][1]);
        }
        for(i=0;i<c;i++)
        {
            for(j=0;j<tm;j++)
            {
                printf("%c",d[i][j]);
            }
            printf("\n");
        }
    return 0;
}
void draw(int x1,int y1,int x2,int y2)
{
  int i;
  if(x1==x2)
  {
     if(y1<y2)
     {
        for(i=y1+1;i<y2;i++)
        {
           if(d[x2][i]=='.')
              d[x2][i]='-';
           else if(d[x2][i]=='|')
           {
              d[x2][i]='+';
           }
        }
     }
     else
     {
        for(i=y1-1;i>y2;i--)
        {
           if(d[x2][i]=='.')
              d[x2][i]='-';
           else if(d[x2][i]=='|')
           {
              d[x2][i]='+';
           }
        }
     }
  }
  else if(y1==y2)
  {
    if(x1<x2)
    {
      for(i=x1+1;i<x2;i++)
      {
        if(d[i][y2]=='.')
            d[i][y2]='|';
        else if(d[i][y2]=='-')
        {
            d[i][y2]='+';
        }
      }
    }
    else
    {
      for(i=x1-1;i>x2;i--)
      {
        if(d[i][y2]=='.')
            d[i][y2]='|';
        else if(d[i][y2]=='-')
        {
            d[i][y2]='+';
        }
      }
    }

  }
}
