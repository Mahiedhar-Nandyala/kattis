#include<stdio.h>
#include<algorithm>>
int main()
{
    int i,n,m=0,f=0,k,c=-1,a[100],b[100];
    scanf("%d",&n);
    scanf("%d",&a[0]);
    b[0]=a[0];
    for(i=1;i<n;i++)
    {
        scanf("%d",&a[i]);
        b[i]=a[i];
    }
    std::sort(a,a+n);
    for(i=n-1;i>=0;i--)
    {
        if((a[i]!=a[i-1])&&(a[i]!=c))
        {
            c=a[i];
            k=a[i];
            f=1;
            break;
        }
        else
            c=a[i];
    }
    if(f==1)
    {
       for(i=0;i<n;i++)
        if(k==b[i])
            printf("\n%d",i+1);

    }
    else
        printf("none");
    return 0;
}
