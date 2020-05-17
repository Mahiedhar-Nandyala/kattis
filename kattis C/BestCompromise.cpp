#include<stdio.h>
int main()
{
    int l,n,j,i,zc=0,t,oc=0;
    char a[100][100];
    scanf("%d",&t);
    while(t)
    {
        scanf("%d",&n);
        scanf("%d",&l);
        getchar();
        for(i=0;i<n;i++)
            scanf("%s",a[i]);
        for(i=0;i<l;i++)
        {
            zc=0;
            oc=0;
            for(j=0;j<n;j++)
            {
               if(a[j][i]=='0')
                 zc++;
               else
                 oc++;
            }
            if(zc>oc)
                printf("0");
            else
                printf("1");
        }
        printf("\n");
        t--;
    }
    return 0;
}
