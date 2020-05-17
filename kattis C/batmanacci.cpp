#include<stdio.h>
#include<string.h>
int main()
{
    char a[100000]="N",b[100000]="A",t[100000];
    int n,i,k;
    scanf("%d",&n);
    scanf("%d",&k);

    if(n==1)
       strcpy(t,a);
    else if(n==2)
        strcpy(t,b);
    else
    {
     for(i=3;i<=n;i++)
     {
        if(i%2!=0)
        {
          strcat(a,b);
          strcpy(t,a);
        }
        else
        {
          strcat(b,a);
          strcpy(t,b);
        }
     }
    }
    printf("%s",t);
    return 0;
}
