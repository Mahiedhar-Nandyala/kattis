#include<stdio.h>
void add(long long int,long long int);
void prod(long long int,long long int);
int main()
{
    long long int a=0,b=0;
    int x;
    char t,op;
  while(1)
  {
    a=0;
    b=0;
    while(((t=getchar())!=EOF)&&t!=' ')
    {
            a=(a*10)+(t-48);
    }
    if(t==EOF)
        break;
    op=getchar();
    getchar();
    while(((t=getchar())!=EOF)&&t!='\n')
    {
            b=(b*10)+(t-48);
    }
    if(op=='+')
      add(a,b);
    else if(op=='*')
      prod(a,b);
 //   else
//       pow(a,b);

  }
    return 0;
}
void add(long long int a,long long int b)
{
    int c=0,p,i,cr=0,r,q,s;
    int x[4];
    while(c<4)
    {
        p=a%10;
        a=a/10;
        q=b%10;
        b=b/10;
        r=p+q;
        if(cr!=0)
        {
            r=r+cr;
            cr=0;
        }
        if(r>9)
        {
            cr=r/10;
            r=r%10;
        }
        x[c]=r;
        c++;
    }
    for(i=3;i>=0;i--)
    {
        if(x[i]!=0)
         printf("%d",x[i]);
    }
    printf("\n");
}
void prod(long long int a,long long int b)
{
    int c=0,x=3,p,q,i,j,r[4][4]={0},rs,mr[4]={0};

    while(c<4)
    {
        p=b%10;
        b=b/10;
        q=a%10000;
        rs=p*q;
        i=x;
        while(i>=0)
        {
            r[c][i]=rs%10;
            rs=rs/10;
            i--;
        }
        c++;
        x--;
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            mr[i]=mr[i]+r[j][i];
        }
    }
    for(i=0;i<4;i++)
    {
        if(mr[i]>9)
        {
            mr[i]=mr[i]%10;
        }
        printf("%d",mr[i]);
    }
}
