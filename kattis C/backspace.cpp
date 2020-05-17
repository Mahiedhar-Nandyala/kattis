#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000000];
    int l,f=0,t1,i,j,c1=0,s=0,t,c2=0,c=0;
    scanf("%s",a);
    s=strlen(a);
    //Erasing Last char's
    c=0;
    for(i=s-1;i>=0;i--)
    {
        if(a[i]=='<')
            c++;
        else
          break;
    }
    c1=0;
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='<')
        {
         printf("\b");
         c1++;
        }
        else
        {
            for(j=0;j<c1;j++)
              printf(" ");
            for(j=0;j<c1;j++)
                printf("\b");
            printf("%c",a[i]);
            c1=0;
        }
    }

    for(i=0;i<c;i++)
        printf(" ");
    for(i=0;i<c;i++)
        printf("\b");

    return 0;
}

