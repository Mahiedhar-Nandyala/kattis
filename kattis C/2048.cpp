#include<stdio.h>
void left(void);
void trnsr(int);
void trnsl(int);
void algn(void);
int a[4][4],d,i,j,f=0;

int main()
{
 for(i=0;i<4;i++)
 {
  for(j=0;j<4;j++)
    scanf("%d",&a[i][j]);
 }
 scanf("%d",&d);
 switch(d)
 {
  case 0:
	left();
	break;
  case 1:
	trnsr(1);
	left();
	trnsl(1);
	break;
  case 2:
	trnsr(2);
	left();
	trnsl(2);
	break;
  case 3:
	trnsr(3);
	left();
	trnsl(3);
	break;
  default:
	 f=1;
 }
 if(f==0)
 {
  printf("ans : \n");
  for(i=0;i<4;i++)
  {
   for(j=0;j<4;j++)
    printf("  %d  ",a[i][j]);
   printf("\n");
  }
 }
 getch();
 return 0;
}
void left()
{
  for(i=0;i<4;i++)
  {
   for(j=0;j<4;j++)
   {
    if(a[i][j]!=0)
    {
     if((a[i][j+1]!=0) && ((j+1)<4))
     {
      if(a[i][j]==a[i][j+1])
      {
	a[i][j]+=a[i][j+1];
	a[i][j+1]=0;
      }
     }
     else if((a[i][j+2]!=0) && ((j+2)<4))
     {
      if(a[i][j]==a[i][j+2])
      {
	a[i][j]+=a[i][j+2];
	a[i][j+2]=0;
      }
      else
      {
	a[i][j+1]=a[i][j+2];
	a[i][j+2]=0;
      }
     }
     else if((a[i][j+3]!=0 )&& ((j+3)<4))
     {
      if(a[i][j]==a[i][j+3])
      {
	a[i][j]+=a[i][j+3];
	a[i][j+3]=0;
      }
      else
      {
	a[i][j+1]=a[i][j+3];
	a[i][j+3]=0;
	a[i][j+2]=0;
      }
     }
    }
   }
  }
  algn();
}
void algn(void)
{
 int k,p,q;
 for(i=0;i<4;i++)
 {
  for(j=0;j<4;j++)
  {
   for(k=0;k<3;k++)
      if((a[j][k]==0) && (a[j][k+1]!=0))
      {
       a[j][k]=a[j][k+1];
       a[j][k+1]=0;
      }
  }
 }
}
void trnsr(int x)
{
 int b[4][4],k;
 while(x)
 {
  for(i=0;i<4;i++)
  {
   for(j=0;j<4;j++)
   {
   b[i][j]=a[i][j];
   }
  }
  for(i=0;i<4;i++)
  {
   for(j=0,k=3;j<4;j++,k--)
   {
   a[k][i]=b[i][j];
   }
  }
  x--;
 }
}
void trnsl(int x)
{
 int b[4][4],k;
 while(x)
 {
  for(i=0;i<4;i++)
  {
   for(j=0;j<4;j++)
   {
   b[i][j]=a[i][j];
   }
  }
  for(i=0,k=3;i<4;i++,k--)
  {
   for(j=0;j<4;j++)
   {
   a[j][k]=b[i][j];
   }
  }
  x--;
 }
}
