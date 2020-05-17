#include<stdio.h>
int main()
{
    int a[3]={1,0,0},t,p=1;
    char x;
    while((x=getchar())!='\n')
    {
        if(x=='A')
        {
            t=a[0];
            a[0]=a[1];
            a[1]=t;

            if(a[0]==1)
                p=1;
            else if(a[1]==1)
                p=2;
        }
        else if(x=='B')
        {
            t=a[1];
            a[1]=a[2];
            a[2]=t;
            if(a[1]==1)
                p=2;
            else if(a[2]==1)
                p=3;
        }
        else if(x=='C')
        {
            t=a[0];
            a[0]=a[2];
            a[2]=t;
            if(a[0]==1)
                p=1;
            else if(a[2]==1)
                p=3;
        }
    }
    printf("%d",p);
    return 0;
}
