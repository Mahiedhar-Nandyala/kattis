#include<stdio.h>
int main()
{
    int a[6],i,b[6]={1,1,2,2,2,8};
    for(i=0;i<6;i++)
        scanf("%d",&a[i]);
    for(i=0;i<6;i++)
        a[i]=b[i]-a[i];
    for(i=0;i<6;i++)
        printf("%d ",a[i]);
    return 0;
}
