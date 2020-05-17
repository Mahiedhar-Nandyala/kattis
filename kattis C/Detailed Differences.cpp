#include<stdio.h>
int main()
{
    int n,i,j;
    char a[50],b[50];
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++)
    {
        scanf("%s",a);
        scanf("%s",b);
        printf("%s\n",a);
        printf("%s\n",b);
        for(j=0;a[j]!='\0';j++)
        {
            if(a[j]==b[j])
                printf(".");
            else
                printf("*");
        }
        printf("\n\n");
    }
    return 0;
}
