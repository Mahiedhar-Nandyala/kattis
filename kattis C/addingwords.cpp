#include<stdio.h>
#include<string.h>
int main()
{
    char a[250],b[250];
    int i,l,j,k,g;
    scanf("%s",a);
    l=strlen(a);
    for(i=0;i<l-1;i++)
    {
     if(a[i] == a[i+1])
     {
        for(j=i+1;a[j]==a[i];j++)
          a[j]='0';
     }
    }
    j=0;
    for(i=0;i<l;i++)
    {
     if(a[i]!='0')
     {
      b[j]=a[i];
      j++;
     }
    }
    b[j]='\0';
    printf("%s",b);
    return 0;
}
