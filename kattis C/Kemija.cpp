#include<stdio.h>
int main()
{
    char t;
    while((t=getchar())!='\n')
    {
        if(t=='a'||t=='e'||t=='i'||t=='o'||t=='u')
        {
            getchar();
            getchar();
        }
        else if(t=='A'||t=='E'||t=='I'||t=='O'||t=='U')
        {
            getchar();
            getchar();
        }
        printf("%c",t);
    }
    return 0;
}
