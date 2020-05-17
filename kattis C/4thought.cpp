#include<stdio.h>
int main()
{
    char a[5]="+-*/";
    int i,j,k;
    for(i=0;i<4;i++)
        for(j=0;j<4;j++)
          for(k=0;k<4;k++)
            printf("4%c4%c4%c4\n",a[i],a[j],a[k]);
    return 0;
}
