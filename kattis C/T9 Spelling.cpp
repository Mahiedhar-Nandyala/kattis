#include<stdio.h>
int pn(char x)
{
    if(x=='a')
        return 2;
    else if(x=='b')
        return 22;

    else if(x=='c')
        return 222;

    else if(x=='d')
        return 3;

    else if(x=='e')
        return 33;

    else if(x=='f')
        return 333;

    else if(x=='g')
        return 4;

    else if(x=='h')
        return 44;

    else if(x=='i')
        return 444;

    else if(x=='j')
        return 5;

    else if(x=='k')
        return 55;

    else if(x=='l')
        return 555;

    else if(x=='m')
        return 6;

    else if(x=='n')
        return 66;

    else if(x=='o')
        return 666;

    else if(x=='p')
        return 7;

    else if(x=='q')
        return 77;

    else if(x=='r')
        return 777;

    else if(x=='s')
        return 7777;

    else if(x=='t')
        return 8;

    else if(x=='u')
        return 88;

    else if(x=='v')
        return 888;

    else if(x=='w')
        return 9;

    else if(x=='x')
        return 99;

    else if(x=='y')
        return 999;

    else if(x=='z')
        return 9999;
    else if(x==' ')
        return 0;
}
int main()
{
    int t,tm,n,tx,i;
    int pc=-1,c;
    scanf("%d",&n);
    getchar();
    i=1;
    while(n)
    {
        pc=-1;
        printf("Case #%d: ",i);
        while((t=getchar())!='\n')
        {
                c=pn(t);
                tm=c;
                tx=c;
                while(tm>0)
                {
                    tx=tm;
                    tm=tm/10;
                }
                if(pc==tx)
                {
                    printf(" ");
                    printf("%d",c);
                    pc=c%10;
                }
                else
                {
                  printf("%d",c);
                  pc=c%10;
                }

        }
        printf("\n");
        n--;
        i++;
    }
    return 0;
}
