#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,f;
    char a[1000],b[11]="simon says";
    scanf("%d",&n);
    getchar();
    while(n)
    {
        f=0;
        scanf("%[^\n]",a);
        for(i=0;b[i]!='\0';i++)
        {
            if(a[i]==b[i])
                f=1;
            else
            {
                f=0;
                printf("\n");
                break;
            }
        }
        if(f==1)
        {
            for(i=11;a[i]!='\0';i++)
                printf("%c",a[i]);
            printf("\n");
        }
        n--;
        getchar();
    }
    return 0;
}
