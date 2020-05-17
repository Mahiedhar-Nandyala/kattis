#include <iostream>
#include<stdio.h>
#include <set>
int main()
{
  int t,i=97,f=0,co=0,j;
  char c,x,a[26];
  std::set<char> s;
  scanf("%d",&t);
  getchar();
  while(t)
  {
     i=97;
     f=0;
     co=0;
    while((c=getchar())!='\n')
    {
      if(c>=65 && c<=90)
      {
          c = c + 32;
      }
      if(c>=97 && c<=122)
        s.insert(c);
    }
    while (!s.empty())
    {
      x=*s.begin();
      //printf("  %c == %c  ",x,i);
      if(x!=i)
      {
        f=1;
        a[co]=i;
        //printf(" %c ",i);
        co++;
        i++;
      }
      else
      {
        i++;
        s.erase(s.begin());
      }
    }
    a[co]='\0';

    if(f==1 && i==123)
       printf("missing %s",a);
    else
    {
        if(i==123)
          printf("pangram");
        else
        {

          printf("missing ");
          if(f==1)
             printf("%s",a);
          for(j=i;j<=122;j++)
            printf("%c",j);
        }
    }
   if(t>1)
        printf("\n");

   t--;
  }

 return 0;
}
