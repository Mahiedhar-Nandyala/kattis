#include<stdio.h>
int main()
{
    char b[41];
    int i,j,n=0,l,t,d;
    while(1)
    {
        scanf("%d",&n);
        getchar();
        if(n==0)
            break;
        scanf("%s",b);
        getchar();

        for(i=0;b[i]!='\0';i++)
        {
            if((b[i]>=65 && b[i]<=90))
            {
                if((b[i]+n)>=65 && (b[i]+n)<=90)
                    b[i]+=n;
                else if((b[i]+n)==91)
                {
                    b[i]='_';
                }
                else if((b[i]+n)==92)
                {
                    b[i]='.';
                }
                else
                {
                    t=b[i]+n;
                    d=t-92;
                    b[i]=64+d;
                }
            }
            else
            {
                if(b[i]=='_')
                {
                    if(n==1)
                    {
                        b[i]='.';
                    }
                    else
                    {
                        b[i]=64+n-1;
                    }
                }
                else if(b[i]=='.')
                {
                        b[i]=65+n-1;
                }
            }
        }
        l=i;
        for(i=l-1;i>=0;i--)
            printf("%c",b[i]);
            printf("\n");
    }
    return 0;
}
