#include <iostream>
#include<stdio.h>
#include <set>
int main ()
{
  int c=0,t=2,i,n;
  char a[25];
  std::set<std::string> s;
  scanf("%d",&t);
  while(t)
  {
    c=0;
    scanf("%d",&n);
    getchar();
    for(i=1;i<=n;i++)
    {
      scanf("%s",a);
      s.insert(a);
    }
    while (!s.empty())
    {
      c++;
      s.erase(s.begin());
    }
    printf("%d\n",c);
   t--;
  }

 return 0;
}
