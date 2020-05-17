#include<stdio.h>
int main()
{
    int n,a[10],b[10],s=0,i;
    while(1)
    {
        s=0;
        scanf("%d",&n);
        if(n==-1)
          break;
        printf("\n");
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            scanf("%d",&b[i]);
        }
        s=s+(a[0]*b[0]);
        for(i=1;i<n;i++)
        {
            s=s+(a[i]*(b[i]-b[i-1]));
        }
        printf("%d miles",s);
    }
    return 0;
}
