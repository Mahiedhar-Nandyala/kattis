#include<stdio.h>
int main()
{
    int t,a,x;
    scanf("%d",&t);
    while(t)
    {
        scanf("%d",&a);
        if(a>=0)
        {
            if(a%2==0)
                printf("%d is even",a);
            else
                printf("%d is odd",a);
        }
        else
        {
            x=(~a)+1;
            if(x%2==0)
                printf("%d is even",a);
            else
                printf("%d is odd",a);
        }
        if(t>1)
            printf("\n");
        t--;
    }
    return 0;
}
