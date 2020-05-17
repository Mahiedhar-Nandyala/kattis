#include<stdio.h>
int main()
{
  int i,x,y,n;
  scanf("%d %d %d",&x,&y,&n);
  for(i=1;i<=n;i++)
  {
      if(i%x==0 && i%y==0)
        printf("FizzBuzz");
      else if(i%x==0)
        printf("Fizz");
      else if(i%y==0)
        printf("Buzz");
      else
        printf("%d",i);
    printf("\n");
  }
  return 0;
}
