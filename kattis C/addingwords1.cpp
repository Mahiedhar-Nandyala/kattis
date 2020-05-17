#include<stdio.h>
#include<string.h>
int main()
{
    char d[2000][100],t;
    int nd[2000],n=0,i,j;
    //scanf("%d",&n);
    getchar();
    for(i=0;;i++)
    {
        scanf("%[^\n]",d[i]);
        getchar();
        n++;
        if(d[i][0]==EOF)
           break;
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("%s\n",d[i]);
    }





    return 0;
}

/*
  while((t=getchar())!=EOF)
    {
        if(t=="\n")
        {
         i++;
        }
        else if(t==" ")
        {

        }

    }
*/
