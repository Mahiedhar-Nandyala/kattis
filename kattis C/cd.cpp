#include<stdio.h>
int fnd(long,long,long);
long *a = new long[1000000];
long ac=0;
int binarySearch(long l,long r,long x)
{
   if (r >= l)
   {
        int mid = l + (r - l)/2;
        if (a[mid] == x)
            return mid;
        if (a[mid] > x)
            return binarySearch(l, mid-1, x);
        return binarySearch(mid+1, r, x);
   }
   return -1;
}
int main()
{
    long m,n;
    long j,c=0,x,i,t=-1;
    while(1)
    {
        c=0;t=-1;
        scanf("%ld%ld",&n,&m);
        if(n==0 && m==0)
            break;

        j=0;
        for(i=0;i<n;i++)
        {
            scanf("%ld",&x);
            if(x!=t)
            {
                a[j]=x;
                t=x;
                j++;
            }
        }
        ac=j;
        t=-1;
        for(i=0;i<m;i++)
        {
            scanf("%ld",&x);
            if(binarySearch(0,ac-1,x) != -1)
                c++;
        }
        printf("%ld",c);
    }
    delete[] a;
    return 0;
}

