#include<stdio.h>
#include<string.h>
int main()
{
    char ch[1000];
    int a,b;
    scanf("%s",ch);
    a=strlen(ch);
    scanf("%s",ch);
    b=strlen(ch);
    if(a<b)
        printf("no");
    else
        printf("go");
    return 0;
}
