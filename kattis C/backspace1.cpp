#include<stdio.h>
int main()
{
    char t,a[1000000];
    int i=0;
    while((t=getchar())!='\n')
    {
        if(t!='<')
        {
           a[i]=t;
           i++;
        }
        else
        {
            i--;
            if(i<0)
               i=0;
        }
    }
    a[i]='\0';
    printf("%s",a);
    return 0;
}
