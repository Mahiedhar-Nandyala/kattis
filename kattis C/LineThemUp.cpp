#include<stdio.h>
#include<string.h>

int main()
{
    char a[20][15];
    int t,i,j,f;
    scanf("%d",&t);
    for(i=0;i<t;i++)
        scanf("%s",a[i]);
    f=0;
    for(i=0;i<t-1;i++)
    {
        if(strcmp(a[i],a[i+1])>0)
        {
            if(f==0)
            {
                f=1;
            }
            if(f==1)
            {

            }
            else
            {
                f=3;
                break;
            }

        }
        else if(strcmp(a[i],a[i+1])<0)
        {
            if(f==0)
            {
                f=2;
            }
            if(f==2)
            {

            }
            else
            {
                f=3;
                break;
            }
        }
       }
    if(f==1)
        printf("DECREASING");
    else if(f==2)
        printf("INCREASING");
    else
        printf("NEITHER");
    return 0;
}
