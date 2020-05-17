#include<stdio.h>
#include<string.h>
int main()
{
    int s,sc,f,i,j,nq=0,scr=0,pen=0;
    int sr[100],c=0,p[100],m[100];
    char ch,t,str[20];
    while(1)
    {
        i=0;
        sc=0;
        s=0;
        f=0;
       while((t=getchar())!='\n')
        {
          if(t=='-')
          {
            f=1;
            break;
          }
          if(t==' ')
            sc++;
          else
          {
              if(sc==0)
              {
                  s=(s*10)+(t-48);
                  if(s==-1)
                  {
                      break;
                  }
              }
              else if(sc==1)
                  p[c]=t;
              else if(sc==2)
              {
                str[i]=t;
                i++;
              }
          }
        }
        str[i]='\0';
        sr[c]=s;
        if(f==1)
            break;
        if(strcmp(str,"right")==0)
            m[c]=1;
        else
            m[c]=0;
        int peny=0;
        if(m[c]==1)
        {
          scr=scr+sr[c];
          nq++;
          for(j=0;j<c;j++)
          {
              if(p[j]==p[c])
              {
                  if(m[j]==0)
                  {
                    pen=pen+20;
                    peny=peny+20;
                  }
                  else
                  {
                    pen=pen-peny;
                    scr=scr-sr[c];
                    nq--;
                    break;
                  }
              }
          }
        }
        c++;
    }
    printf("%d %d",nq,pen+scr);
    return 0;
}
