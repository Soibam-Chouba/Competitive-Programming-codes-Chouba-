#include<iostream>
int main()
{
  int a, b, c;
  std::cin>>a;
  std::cin>>b;
  if(a==2 && b==1 || a==1 && b==2)
  {
      c=a+b;
      std::cout<<c;
  }
  else if (a==3 && b==1)
  {
      c=a-b;
      std::cout<<c;
  }
  else if (b==3 && a==1)
    {
      c=b-a;
      std::cout<<c;
    }
  else if (a==3 && b==2)
    {
      c=a-b;
      std::cout<<c;
    }
   else if (b==3 && a==2)
    {
      c=b-a;
      std::cout<<c;
    }
  return 0;
}
