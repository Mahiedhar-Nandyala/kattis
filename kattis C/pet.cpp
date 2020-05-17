#include<stdio.h>
int main()
{
  int a[5]={0},i,j,x;
  for(i=0;i<5;i++)
  {
      for(j=0;j<4;j++)
      {
       scanf("%d",&x);
       a[i]=a[i]+x;
      }
  }
  j=0;
  for(i=1;i<5;i++)
  {
      if(a[j]<a[i])
      {
          j=i;
      }
  }
  printf("%d %d",j+1,a[j]);
  return 0;
}
