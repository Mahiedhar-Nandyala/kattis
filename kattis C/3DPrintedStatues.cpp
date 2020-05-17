#include<stdio.h>
int main()
{
    long n,i=2,k=2;
    scanf("%ld",&n);
    if(n<=2)
        printf("%ld",n);
    else
    {
        while(i<n)
        {
            i=i*2;
            k++;
        }
        printf("%ld",k);
    }
    return 0;
}
