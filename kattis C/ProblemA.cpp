#include<stdio.h>
int main()
{
    char a;
    while((a=getchar())!='\n')
    {
        if(a=='a'||a=='A')
            printf("@");
        else if(a=='b'||a=='B')
            printf("8");
        else if(a=='c'||a=='C')
            printf("(");
        else if(a=='d'||a=='D')
            printf("|)");
        else if(a=='e'||a=='E')
            printf("3");
        else if(a=='f'||a=='F')
            printf("#");
        else if(a=='g'||a=='G')
            printf("6");
        else if(a=='h'||a=='H')
            printf("[-]");
        else if(a=='i'||a=='I')
            printf("|");
        else if(a=='j'||a=='J')
            printf("_|");
        else if(a=='k'||a=='K')
            printf("|<");
        else if(a=='l'||a=='L')
            printf("1");
        else if(a=='m'||a=='M')
            printf("[]\\/[]");
        else if(a=='n'||a=='N')
            printf("[]\\[]");
        else if(a=='o'||a=='O')
            printf("0");
        else if(a=='p'||a=='P')
            printf("|D");
        else if(a=='q'||a=='Q')
            printf("(,)");
        else if(a=='r'||a=='R')
            printf("|Z");
        else if(a=='s'||a=='S')
            printf("$");
        else if(a=='t'||a=='T')
            printf("']['");
        else if(a=='u'||a=='U')
            printf("|_|");
        else if(a=='v'||a=='V')
            printf("\\/");
        else if(a=='w'||a=='W')
            printf("\\/\\/");
        else if(a=='x'||a=='X')
            printf("}{");
        else if(a=='y'||a=='Y')
            printf("`/");
        else if(a=='z'||a=='Z')
            printf("2");
        else
            printf("%c",a);
    }
    return 0;
}
