#include<stdio.h>
int m,n,s,t;
char a[20][20];
void moves(int ,int ,int );
int main()
{
   int i=0,j=0,l,k=0,x,y;
    scanf("%d",&m);
    scanf("%d",&n);
   getchar();
    for (i=0;i<m;i++)
    {
     for (j=0;j<n;j++)
     {
      scanf("%c",&a[i][j]);
     }
     getchar();
    }
    printf("\n");
    for (i=0;i<m-1;i++)
    {
        if (a[i][0]=='*')
        {
            k=1;
            x=i;
            y=0;
            l=0;
            break;
        }
        else if (a[i][n-1]=='*')
        {
            k=1;
            x=i;
            y=n-1;
            l=1;
            break;
        }
    }
    if (k!=1)
    {
        for (i=1;i<n-1;i++)
        {

            if (a[0][i]=='*')
            {

                x=0;
                y=i;
                l=2;
                break;
            }
            else if (a[m-1][i]=='*')
            {
                x=m-1;
                y=i;
                l=3;
                break;
            }
        }
    }
    moves(x,y,l);
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            if (i==s && j==t)
                printf("&");
            else
            printf("%c",a[i][j]);
        }
        printf("\n");
    }
}
void moves(int x,int y,int c)
{
    if (a[x][y]=='x')
    {
        s=x;
        t=y;
        return;
    }
    switch(c)
    {
    case 0:
        if (a[x][y]=='/')
            moves(x-1,y,3);
        else if (a[x][y]=='\\')
        moves(x+1,y,2);
        else if (a[x][y]=='.')
            moves(x,y+1,0);
            break;
    case 1:
        if (a[x][y]=='/')
            moves(x+1,y,2);
        else if (a[x][y]=='\\')
        moves(x-1,y,3);
        else if (a[x][y]=='.')
            moves(x,y-1,0);
            break;
    case 2:
        if (a[x][y]=='/')
            moves(x,y-1,1);
        else if (a[x][y]=='\\')
        moves(x,y+1,0);
        else if (a[x][y]=='.')
            moves(x+1,y,2);
            break;
    case 3:
        if (a[x][y]=='/')
            moves(x,y+1,0);
        else if (a[x][y]=='\\')
        moves(x,y-1,1);
        else if (a[x][y]=='.')
            moves(x-1,y,3);
            break;
    }
}
