#include<stdio.h>
#include<algorithm>
int n,f,l[200000];
int ser(int,int,int);
int main()
{
    int i,c=0,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&l[i]);
    std::sort(l,l+n);
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(l[i]>0 && l[j]>0)
                f=ser(l[i]+l[j],j+1,n-1);
            else if(l[i]<0 && l[j]<0)
                f=ser(l[i]+l[j],0,i-1);
            else if(l[i]<0 && l[j]>0)
                f=ser(l[i]+l[j],i+1,j-1);
            else if(l[i]==0 || l[j]==0)
                f=1;
            if(f==1)
                c=c+2;
            f=0;
        }
    }
    printf("%d",c);
    return 0;
}
int ser(int k,int mn,int mx)
{
    int r;
    r=mn+mx;
    r=r/2;
    if(k>l[r] && r<mx)
        ser(k,r+1,mx);
    else if(k<l[r] && r>mn)
        ser(k,mn,r-1);
    else if(k==l[r])
        return 1;
    else
        return 0;
}
