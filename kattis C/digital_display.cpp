#include<stdio.h>
#include<string.h>
void disp(int,int,int,int);
int main()
{
    int i,j,c,n,t,b[4]={0};
    char a[5];

    for(i=0;1;i++)
    {
        scanf("%s",a);
        if(strcmp(a,"end")==0)
        {
          printf("end");
          break;
        }
        getchar();
        c=0;
        for(j=0;a[j]!='\0';j++)
        {
            if(a[j]!=':')
            {
                b[c]=a[j]-48;
                c++;
            }
        }
        disp(b[0],b[1],b[2],b[3]);
        printf("\n\n");
    }
    return 0;
}

void disp(int a,int b,int c,int d)
{
     char x[10][7][6];
     strcpy(x[0][0],"+---+");x[0][0][5]='\0';
     strcpy(x[0][1],"|   |");x[0][1][5]='\0';
     strcpy(x[0][2],"|   |");x[0][2][5]='\0';
     strcpy(x[0][3],"+   +");x[0][3][5]='\0';
     strcpy(x[0][4],"|   |");x[0][4][5]='\0';
     strcpy(x[0][5],"|   |");x[0][5][5]='\0';
     strcpy(x[0][6],"+---+");x[0][6][5]='\0';

     strcpy(x[1][0],"    +");x[1][0][5]='\0';
     strcpy(x[1][1],"    |");x[1][1][5]='\0';
     strcpy(x[1][2],"    |");x[1][2][5]='\0';
     strcpy(x[1][3],"    +");x[1][3][5]='\0';
     strcpy(x[1][4],"    |");x[1][4][5]='\0';
     strcpy(x[1][5],"    |");x[1][5][5]='\0';
     strcpy(x[1][6],"    +");x[1][6][5]='\0';

     strcpy(x[2][0],"+---+");x[2][0][5]='\0';
     strcpy(x[2][1],"    |");x[2][1][5]='\0';
     strcpy(x[2][2],"    |");x[2][2][5]='\0';
     strcpy(x[2][3],"+---+");x[2][3][5]='\0';
     strcpy(x[2][4],"|    ");x[2][4][5]='\0';
     strcpy(x[2][5],"|    ");x[2][5][5]='\0';
     strcpy(x[2][6],"+---+");x[2][6][5]='\0';

     strcpy(x[3][0],"+---+");x[3][0][5]='\0';
     strcpy(x[3][1],"    |");x[3][1][5]='\0';
     strcpy(x[3][2],"    |");x[3][2][5]='\0';
     strcpy(x[3][3],"+---+");x[3][3][5]='\0';
     strcpy(x[3][4],"    |");x[3][4][5]='\0';
     strcpy(x[3][5],"    |");x[3][5][5]='\0';
     strcpy(x[3][6],"+---+");x[3][6][5]='\0';

     strcpy(x[4][0],"+   +");x[4][0][5]='\0';
     strcpy(x[4][1],"|   |");x[4][1][5]='\0';
     strcpy(x[4][2],"|   |");x[4][2][5]='\0';
     strcpy(x[4][3],"+---+");x[4][3][5]='\0';
     strcpy(x[4][4],"    |");x[4][4][5]='\0';
     strcpy(x[4][5],"    |");x[4][5][5]='\0';
     strcpy(x[4][6],"    +");x[4][6][5]='\0';

     strcpy(x[5][0],"+---+");x[5][0][5]='\0';
     strcpy(x[5][1],"|    ");x[5][1][5]='\0';
     strcpy(x[5][2],"|    ");x[5][2][5]='\0';
     strcpy(x[5][3],"+---+");x[5][3][5]='\0';
     strcpy(x[5][4],"    |");x[5][4][5]='\0';
     strcpy(x[5][5],"    |");x[5][5][5]='\0';
     strcpy(x[5][6],"+---+");x[5][6][5]='\0';

     strcpy(x[6][0],"+---+");x[6][0][5]='\0';
     strcpy(x[6][1],"|    ");x[6][1][5]='\0';
     strcpy(x[6][2],"|    ");x[6][2][5]='\0';
     strcpy(x[6][3],"+---+");x[6][3][5]='\0';
     strcpy(x[6][4],"|   |");x[6][4][5]='\0';
     strcpy(x[6][5],"|   |");x[6][5][5]='\0';
     strcpy(x[6][6],"+---+");x[6][6][5]='\0';

     strcpy(x[7][0],"+---+");x[7][0][5]='\0';
     strcpy(x[7][1],"    |");x[7][1][5]='\0';
     strcpy(x[7][2],"    |");x[7][2][5]='\0';
     strcpy(x[7][3],"    +");x[7][3][5]='\0';
     strcpy(x[7][4],"    |");x[7][4][5]='\0';
     strcpy(x[7][5],"    |");x[7][5][5]='\0';
     strcpy(x[7][6],"    +");x[7][6][5]='\0';

     strcpy(x[8][0],"+---+");x[8][0][5]='\0';
     strcpy(x[8][1],"|   |");x[8][1][5]='\0';
     strcpy(x[8][2],"|   |");x[8][2][5]='\0';
     strcpy(x[8][3],"+---+");x[8][3][5]='\0';
     strcpy(x[8][4],"|   |");x[8][4][5]='\0';
     strcpy(x[8][5],"|   |");x[8][5][5]='\0';
     strcpy(x[8][6],"+---+");x[8][6][5]='\0';

     strcpy(x[9][0],"+---+");x[9][0][5]='\0';
     strcpy(x[9][1],"|   |");x[9][1][5]='\0';
     strcpy(x[9][2],"|   |");x[9][2][5]='\0';
     strcpy(x[9][3],"+---+");x[9][3][5]='\0';
     strcpy(x[9][4],"    |");x[9][4][5]='\0';
     strcpy(x[9][5],"    |");x[9][5][5]='\0';
     strcpy(x[9][6],"+---+");x[9][6][5]='\0';

    int i;
    for(i=0;i<7;i++)
    {
     if(i==2)
       printf("%s  %s  o  %s  %s\n",x[a][i],x[b][i],x[c][i],x[d][i]);
     else if(i==4)
       printf("%s  %s  o  %s  %s\n",x[a][i],x[b][i],x[c][i],x[d][i]);
     else
       printf("%s  %s     %s  %s\n",x[a][i],x[b][i],x[c][i],x[d][i]);
    }
}

