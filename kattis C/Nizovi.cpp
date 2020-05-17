#include<stdio.h>
int main()
{
    char t,x,y,a[1500];
    int sc=0,i,c=0;
    scanf("%s",a);
    while((t=a[c])!='\0')
    {
        if(t=='{')
        {
          if(a[c+1]==',')
          {
            for(i=0;i<sc;i++)
             printf(" ");
            printf("%c%c\n",t,a[c+1]);
            sc++;
            sc++;
            c++;
          }
          else
          {
            for(i=0;i<sc;i++)
             printf(" ");
            printf("%c\n",t);
            sc++;
            sc++;
          }
          x=t;
        }
        else if(t=='}')
        {
          if(a[c+1]==',')
          {
            if(x!=',' && x!='{')
            {
              if(x=='}')
              {
               sc--;
               sc--;
                for(i=0;i<sc;i++)
                  printf(" ");
                printf("%c%c\n",t,a[c+1]);
              }
              else
              {
                printf("\n");
                sc--;
                sc--;
                for(i=0;i<sc;i++)
                  printf(" ");
                printf("%c%c\n",t,a[c+1]);
              }
            }
            else
            {
             sc--;
             sc--;
             for(i=0;i<sc;i++)
               printf(" ");
             printf("%c%c\n",t,a[c+1]);
            }
            c++;
          }
          else
          {
            if(x!=',' && x!='{')
            {
              if(x=='}')
              {
               sc--;
               sc--;
                for(i=0;i<sc;i++)
                  printf(" ");
                printf("%c\n",t);
              }
              else
              {
                printf("\n");
                sc--;
                sc--;
                for(i=0;i<sc;i++)
                  printf(" ");
                printf("%c\n",t);
              }
            }
            else
            {
             sc--;
             sc--;
             for(i=0;i<sc;i++)
               printf(" ");
             printf("%c\n",t);
            }
          }
           x=t;
        }
        else if(t==',')
        {
           printf("%c\n",t);
              x=t;
        }
        else
        {
            if(x==','||x=='}'||x=='{')
            {
             for(i=0;i<sc;i++)
               printf(" ");
             printf("%c",t);
            }
            else
              printf("%c",t);
            x=t;
        }
        c++;
    }
    return 0;
}
