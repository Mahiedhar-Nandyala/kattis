#include<stdio.h>
int main()
{
    int a,b,c,x[3];
    scanf("%d %d %d",&a,&b,&c);
    if(a+b==c)
       printf("%d+%d=%d",a,b,c);
    else if(a-b==c)
       printf("%d-%d=%d",a,b,c);
    else if(a*b==c)
       printf("%d*%d=%d",a,b,c);
    else if(a/b==c)
       printf("%d/%d=%d",a,b,c);
    else if(a==b+c)
       printf("%d=%d+%d",a,b,c);
    else if(a==b-c)
       printf("%d=%d-%d",a,b,c);
    else if(a==b*c)
       printf("%d=%d*%d",a,b,c);
    else if(a==b/c)
       printf("%d=%d/%d",a,b,c);
    return 0;
}