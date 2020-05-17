#include<stdio.h>
int main()
{
    int t,d,c=0,tmp,fr,m,i,s=0,md[1000];

    scanf("%d",&t);
    while(t)
    {
        c=0;
        scanf("%d",&d);
        scanf("%d",&m);
        for(i=0;i<m;i++)
        {
            scanf("%d",&md[i]);
        }
        tmp=6;
        fr=6;
        i=0;
        s=0;
        s+=md[0];
        while(tmp<=d)
        {
            if(fr==13)
            {
               c++;
            }
            fr=fr+7;
            tmp+=7;
            if(tmp>s)
            {
               fr=tmp-s;
               s+=md[i];
               i++;
            }
        }
        printf("%d\n",c);
        t--;
    }
    return 0;
}
