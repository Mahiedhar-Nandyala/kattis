#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int bor(int ,int);
int cor(int,int);
int hbor(int);
int vbor(int);
int s,a[100][100];
int main()
{
 int m,n,m1,n1,yn,i,c=0;
 first:
 printf("enter size : ");
 scanf("%d",&s);
 if(s%2!=0)
 {
  for(i=0;i<s;i++)
  {
   for(m=0;m<s;m++)
    a[i][m] = 0;
  }
  for(i=1;i<=(s*s);i++)
  {
   c++;
   if(c==1)
   {
    m=0;
    n = (((s+1)/2)-1);
    a[0][n] = i;
   }
   else
   {
    // diagonal
    m1 = m-1;
    n1 = n+1;
    // Border & Corner
    if(bor(m1,n1))
    {
     if(cor(m1,n1))
     {
      m=m+1;
      a[m][n] = i;
     }
     else
     {
      if(hbor(m1))
      {
       m = s-1;
       n = n+1;
       a[m][n] = i;
      }
      if(vbor(n1))
      {
       m = m-1;
       n = 0;
       a[m][n] = i;
      }
     }
    }
    else
    {
     if(a[m1][n1]!=0)
     {
      m=m+1;
      a[m][n] = i;
     }
     else
     {
      m = m1;
      n = n1;
      a[m][n] = i;
     }
    }
   }
  }
  //print
  for(i=0;i<s;i++)
  {
   for(m=0;m<s;m++)
      printf("  %d  ",a[i][m]);
   printf("\n");
  }
 }
 else
 {
   printf("Enter only odd numbers!!!");
   mid:
   printf("Do you want to continue... ?");
   printf("1.YES\n2.NO");
   printf("Enter u'r choise : ");
   scanf("%d",&yn);
   if(yn==1)
     goto first;
   else if(yn==2)
     exit(0);
   else
   {
    printf("Wrong choise!!");
    goto mid;
   }
 }
 getch();
 return 0;
}
int bor(int x,int y)
{
 if(x<0 || y>(s-1) || x>(s-1) || y<0)
  return 1;
 else
  return 0;
}
int cor(int x,int y)
{
 if(x<0 && y>=s)
  return 1;
 else
 return 0;
}
int hbor(int x)
{
 if(x<0)
  return 1;
 else
  return 0;
}
int vbor(int y)
{
 if(y>=s)
  return 1;
 else
  return 0;
}
