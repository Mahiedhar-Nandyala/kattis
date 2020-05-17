#include<stdio.h>
#include<string.h>
int main()
{
    char a[10000],b[10000];
    int i=0,j=0,c=1,l,n;
    scanf("%d",&n);
    getchar();
    scanf("%[^\n]",a);
    l=strlen(a);
    for(i=0;i<n;i++)
    {
        if(j>=l)
        {
            j=c;
            c++;
        }
        if(a[i]>96 && a[i]<123)
           b[j]=(a[i]-32);
        else
           b[j]=a[i];

        j=j+n;
    }

    printf("%s",b);
    return 0;
}
