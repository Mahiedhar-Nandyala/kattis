#include<stdio.h>
int main()
{
    char ch;
    int f=0;
    printf("%c",getchar());
    while( (ch=getchar())!='\n' )
    {
        if(f==1)
        {
            printf("%c",ch);
            f=0;
        }
        if(ch==(char)45)
            f=1;
    }
    return 0;
}
